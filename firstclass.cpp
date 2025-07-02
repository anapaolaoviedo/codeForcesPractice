#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int suma =0;

    for(int i = 0; i<n; i++){
        int persona; cin>>persona;
        suma+=persona;
    }

    if(suma > 0){
        cout<< 'HARD\n'<<endl;
    }
    else{
        cout<< 'EASY\n'<<endl;;
    }
return 0;
}