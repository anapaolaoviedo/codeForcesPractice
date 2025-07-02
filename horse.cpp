#include <iostream>
#include <set>

using namespace std;

set<int> shoes;
int main(){

    int a, b, c, d;
    cin>>a>>b>>c>>d;
    shoes.insert(a);
    shoes.insert(b);
    shoes.insert(c);
    shoes.insert(d);
    

    if(shoes.size() == 1){
        cout<<3<<endl;
    }
    else if(shoes.size() == 2){
        cout<<2<<endl;
    }
    else if(shoes.size() == 3){
        cout<<1<<endl;
    }
    else if(shoes.size()== 4){
        cout<<0<<endl; 
    }
    
}