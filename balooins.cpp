#include <iostream>
#include <vector>
//#include <unordered_map>
#include <string>
#include <unordered_set>
using namespace std;
float pendiente(string a, string b){
    int a1, a2, b1, b2, r_y, r_x;
    string sep1, sep2, sep3, sep4;
    sep1 = a[0];
    sep2 = a[2];
    sep3 = b[0];
    sep4 = b[2];
    a1 = stoi(sep1);
    a2 = stoi(sep2);
    b1 = stoi(sep3);
    b2 = stoi(sep4);
    r_y = a2 - b2;
    r_x = a1 - b1;
    return r_y/r_x; 
}

int main(){

    int num_globos;
    float pendiente_act, pendiente_sig;
    string in;
    vector<string> coords;
    unordered_set<float>mappi;

    cin>>num_globos;
    for (int i = 0; i < num_globos; ++i){
        getline(cin, in);
        coords.push_back(in);
    }
    int darts = 3, p1= 0;
    pendiente_act = pendiente(coords[p1], coords[p1+1]);
    pendiente_sig = pendiente(coords[p1+1], coords[p1+2]);
    while(darts>0 && p1<num_globos){
        if(pendiente_act!= pendiente_sig){
            darts--;
        }
        p1++;
        if (p1+2 < num_globos){
            pendiente_act = pendiente(coords[p1], coords[p1+1]);
            pendiente_sig = pendiente(coords[p1+1], coords[p1+2]);
        }
        if (p1+2 > num_globos)
            break;
    }
    if (darts > 0){
        cout<<"possible"<<endl;
    }else{
        cout<<"impossible"<<endl;
    }
    return 0;
}