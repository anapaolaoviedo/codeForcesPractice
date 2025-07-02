#include <iostream>
using namespace std; 

int main(){

    int arr[100];
    for(int i =2; i<100; i++){
        if(arr[i] == 0){
            arr[i]=1;
        }
        for(int j=i*2; j<100; j+i){
            arr[j]=2;
        }
    }

    return 0;
}