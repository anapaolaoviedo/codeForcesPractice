#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
    int people;
    cin >> people;

    unordered_set<string> seen;
    vector<string> answer;
    string name;

    for (int i = 0; i < people; ++i) {
        cin >> name;

        if (seen.count(name)) {
            answer.push_back("YES");
        } else {
            answer.push_back("NO");
            seen.insert(name);  
        }
    }

    
    for (int i = 0; i < answer.size(); ++i) {
        cout << answer[i] << endl;
    }

    return 0;
}