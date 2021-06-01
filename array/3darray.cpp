#include<iostream>
using namespace std;

int main(){

int x[3][2][2];

cout<<"Enter the 12 number:-"<<endl;

for(int i=0; i<3; i++){
    for(int j=0; j<2; j++){
        for(int k=0; k<2; k++){
        cin>>x[i][j][k];
        }
    }
}

cout<<"Two dimentional Array:"<<endl;
for(int i=0; i<3; i++){
    for(int j=0; j<2; j++){
        for(int k=0; k<2; k++){
            cout<<"Two dimentional Array:["<<i<<"]["<<j<<"]["<<k<<"] = "<<x[i][j][k]<<endl;
        }
    }
}

    return 0;
}
