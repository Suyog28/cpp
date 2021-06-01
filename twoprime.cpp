#include <iostream>
using namespace std;

int main(){
    int num,a,b,i;

    cout<<"enter 2 numbers"<<endl;
    cin>>a>>b;

    for(num=a;num<=b;num++){
        for(i=2;i<num;i++){
            if(num%i==0){
                cout<<"Number is not Prime"<<endl;
                break;
            }
        }
    }
    if(i==num){
        cout<<num<<endl;
    }
    return 0;
}