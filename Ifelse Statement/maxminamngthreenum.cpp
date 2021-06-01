#include<iostream>
using namespace std;

int main(){

#ifndef SUYOG_CODE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

int a, b, c;

cin>>a>>b>>c;

if(a>b){
    if(a>c){
        cout<<"a is greater\n";
    }else{
        cout<<"c is greater\n";
    }
} else {
    if(b>c){
        cout<<"B is greater\n";
    } else{
    cout<<"C is greater\n";
    }

}
return 0;
}