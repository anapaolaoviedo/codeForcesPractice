#include <iostream>
using namespace std;

int main(){

    int lemons, apples, pears;
    int campote = 0;

    cin >> lemons >> apples >> pears;

    
    while(lemons >= 1 && apples >= 2 && pears >= 4){
            campote+=1;
            campote+=2;
            campote+=4;
            lemons-=1;
            apples-=2;
            pears-=4;
    }

    cout<< campote << endl;

    return 0;
}