#include <iostream>
#include <vector>

using namespace std;
int n;
int h = 1;
int top = 1;
int pyramid(int a){
    top++;
    if(a-top <= 0){
        return h;
    }
    
    h++;
    return pyramid(a-top);
}
int main(){
    cin>>n;
    if(n <= 0){
        cout<<0;
    }else{
        cout<<pyramid(n);
    }
    return 0;
}

