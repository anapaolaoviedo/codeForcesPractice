#include <iostream>
using namespace std;

int main(){

    int n;
    string figure_name;
    int total_sum = 0;
    cin>>n;
    for(int i = 0; i<n; ++i ){
        cin>>figure_name;
        if(figure_name == "Tetrahedron"){
            total_sum+=4;
        }
        else if(figure_name == "Cube"){
            total_sum+=6;
        }
        else if(figure_name == "Octahedron"){
            total_sum+=8;
        }
        else if(figure_name == "Dodecahedron"){
            total_sum+=12;
        }
        else if(figure_name== "Icosahedron"){
            total_sum+=20;
        }
    }
    cout<<total_sum<<endl;
}