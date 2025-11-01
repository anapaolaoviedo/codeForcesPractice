#include <bits/stdc++.h>
using namespace std;

const int MAXN = 250005;
vector<pair<int,int>> adj[MAXN];
int n;
long long dp[MAXN][2];
long long x[MAXN];
long long l;

void dfs(int u, int p) {
    dp[u][0] = 0;
    dp[u][1] = 0;
    
    for (auto [v, w] : adj[u]) {
        if (v == p) continue;
        dfs(v, u);
        dp[u][0] += min(dp[v][0] + w, dp[v][1]);
        dp[u][1] += min(dp[v][0], dp[v][1] + w);
    }
}

void reroot(int u, int p, long long up0, long long up1) {
    vector<long long> pref0, pref1, suff0, suff1;
    vector<pair<int,int>> children;
    
    for (auto [v, w] : adj[u]) {
        if (v == p) continue;
        children.push_back({v, w});
    }
    
    int sz = children.size();
    pref0.resize(sz + 1, 0);
    pref1.resize(sz + 1, 0);
    suff0.resize(sz + 1, 0);
    suff1.resize(sz + 1, 0);
    
    for (int i = 0; i < sz; i++) {
        auto [v, w] = children[i];
        pref0[i + 1] = pref0[i] + min(dp[v][0] + w, dp[v][1]);
        pref1[i + 1] = pref1[i] + min(dp[v][0], dp[v][1] + w);
    }
    
    for (int i = sz - 1; i >= 0; i--) {
        auto [v, w] = children[i];
        suff0[i] = suff0[i + 1] + min(dp[v][0] + w, dp[v][1]);
        suff1[i] = suff1[i + 1] + min(dp[v][0], dp[v][1] + w);
    }
    
    long long cost0 = up0 + pref0[sz];
    long long cost1 = up1 + pref1[sz];
    
    x[u] = max(0LL, cost1 + l - cost0);
    
    for (int i = 0; i < sz; i++) {
        auto [v, w] = children[i];
        
        long long new_up0 = up0 + pref0[i] + suff0[i + 1];
        long long new_up1 = up1 + pref1[i] + suff1[i + 1];
        
        long long pass0 = min(new_up0 + w, new_up1);
        long long pass1 = min(new_up0, new_up1 + w);
        
        reroot(v, u, pass0, pass1);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        cin >> n;
        
        for (int i = 1; i <= n; i++) {
            adj[i].clear();
        }
        
        for (int i = 0; i < n - 1; i++) {
            int u, v, w;
            cin >> u >> v >> w;
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }
        
        int q;
        cin >> q;
        
        while (q--) {
            cin >> l;
            
            memset(x, 0, sizeof(long long) * (n + 1));
            dfs(1, -1);
            reroot(1, -1, 0, l);
            
            long long ans = 0;
            for (int i = 1; i <= n; i++) {
                ans += x[i];
            }
            
            cout << ans << "\n";
        }
    }
    
    return 0;
}