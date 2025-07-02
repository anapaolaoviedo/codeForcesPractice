#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main (){
    string str, a;
    int p= 0, c=0, p2= 0;
    cin>>str;
    for (int i = 0; i < str.size(); ++i){
        if (str[i] =='S')
            c++;
        char a=tolower(str[i]);
        cout<<a;
    }
    cout<<endl;
    while(p<=str.size()){
        if (str[p] == 'S' && str[p+1] == 'S'){
                cout<<'B';
                p+=2;
        }
        a=tolower(str[p]);
        cout<<a;
        p++;
    }
    cout<<endl;
    if (c==3){
        while (p2<str.size()){
            if(str[p2] == 'S' && str[p2+1] == 'S'){
                cout<<"s";
                cout<<"B";
                p2 += 3;
            }    
            a=tolower(str[p2]);
            p2++;
            cout<<a;
            }
            
        }
    cout<<endl;
    return 0;
    }