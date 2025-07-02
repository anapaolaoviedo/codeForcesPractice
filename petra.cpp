#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a, b, c;
    int sum_line = 0 ;
    int sum_overall = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a >> b >> c;
        sum_line  = a + b +c;
        if(sum_line > 1){
            ++sum_overall;
        }else{
            sum_overall += 0;
        }
    }

    cout<<sum_overall<<endl;

    return 0;
}