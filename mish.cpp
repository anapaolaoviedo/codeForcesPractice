#include <iostream>

using namespace std;

int main(){
    int turns;
    int num1, num2;
    int mishka = 0;
    int chris = 0;

    cin>>turns;

    for(int i = 0; i <turns; i++){
        cin>>num1>>num2;

        if(num1>num2){
            mishka++;
        }
        else if(num2>num1){
            chris++;
        }
        else if(num1 == num2){
            chris++;
            mishka++;
        }
        
    }

    if(mishka>chris){
        cout<<"Mishka"<<endl;
    }
    else if(chris>mishka){
        cout<<"Chris"<<endl;
    }
    else{
        cout<<"Friendship is magic!^^"<<endl;
    }



}