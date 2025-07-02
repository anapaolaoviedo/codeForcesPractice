#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<string> words;
vector<string> claves;
unordered_map<string, vector<string>> mappy;

// Mapping from letters to digits
string ascci(char c) {
    static const char char_to_digit[26] = {
        '2', '2', '2',  // a, b, c
        '3', '3', '3',  // d, e, f
        '4', '4', '4',  // g, h, i
        '5', '5', '5',  // j, k, l
        '6', '6', '6',  // m, n, o
        '7', '7', '7', '7',  // p, q, r, s
        '8', '8', '8',  // t, u, v
        '9', '9', '9', '9'   // w, x, y, z
    };
    return string(1, char_to_digit[c - 'a']);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    
    words.reserve(n);
    claves.reserve(m);

    for (int i = 0; i < n; ++i) {
        string word;
        cin >> word;
        words.push_back(word);
    }

    for (int i = 0; i < m; ++i) {
        string clave;
        cin >> clave;
        claves.push_back(clave);
        mappy[clave] = {}; // Ensure existence of key in map
    }

    // Process words and convert to numeric representation
    for (const string &word : words) {
        string nemonic;
        nemonic.reserve(word.size());
        for (char c : word) {
            nemonic += ascci(c);
        }
        if (mappy.count(nemonic)) {
            mappy[nemonic].push_back(word);
        }
    }

    // Output results
    for (const string &clave : claves) {
        if (mappy[clave].empty()) {
            cout << "0\n";
        } else {
            sort(mappy[clave].begin(), mappy[clave].end());  // Sort words alphabetically
            cout << mappy[clave].size();
            for (const string &word : mappy[clave]) {
                cout << " " << word;
            }
            cout << "\n";
        }
    }

    return 0;
}