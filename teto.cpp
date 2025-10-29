#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        
        int protections = 0;
        int lastProtectedOrOne = -k; 
        
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                if (i - lastProtectedOrOne >= k) {
                    protections++;
                    lastProtectedOrOne = i;
                } else {
                    lastProtectedOrOne = i;
                }
            }
        }
        
        cout << protections << endl;
    }
    
    return 0;
}