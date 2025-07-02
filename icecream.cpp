#include <iostream>
using namespace std;

int main() {
    int n_operations;
    long long icecreams;
    cin >> n_operations >> icecreams;

    int distressed = 0;

    for (int i = 0; i < n_operations; i++) {
        char sign;
        long long amount;
        cin >> sign >> amount;

        if (sign == '+') {
            icecreams += amount;
        } else if (sign == '-') {
            if (icecreams >= amount) {
                icecreams -= amount;
            } else {
                distressed++;
            }
        }
    }

    cout << icecreams << " " << distressed << endl;
    return 0;
}