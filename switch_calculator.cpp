#include <iostream>
using namespace std;

int main(){

    float n1,n2;

    cout<<"Enter two number"<<endl;
    cin>>n1>>n2;

    char op;
    cin>>op;

    switch(op){
                case '+':
                cout<<n1+n2;
                break;
                
                case '-':
                cout<<n1-n2;
                break;

                case '*':
                cout<<n1*n2;
                break;

                default:
                cout<<"Not valid Operator"<<endl;
    }
return 0;
}