#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;

    int option1 = d1 + d2 + d3;     
    int option2 = 2 * (d1 + d2);    
    int option3 = 2 * (d1 + d3);    
    int option4 = 2 * (d2 + d3);    

    cout << min({option1, option2, option3, option4}) << endl;

    return 0;
}