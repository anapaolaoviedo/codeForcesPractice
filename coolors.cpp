#include <iostream>
#include <vector>
using namespace std;

int main() {
    int row, column;
    cin >> row >> column;

    char pixel;
    bool isColor = false;

    for (int i = 0; i < row * column; ++i) {
        cin >> pixel;
        if (pixel == 'C' || pixel == 'M' || pixel == 'Y') {
            isColor = true;
        }
    }

    if (isColor) {
        cout << "#Color" << endl;
    } else {
        cout << "#Black&White" << endl;
    }

    return 0;
}