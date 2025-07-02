#include <iostream>
#include <set>
using namespace std;

set<char> name;
string n;
int main(){
    cin>>n;
    for(int i = 0; i < n.size(); ++i){
        name.insert(n[i]);
    }
    
    if(name.size()%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }else{
        cout<<"IGNORE HIM!"<<endl;
    }
}