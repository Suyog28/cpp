#include<iostream>
using namespace std;

void isEven(int n){
    if(n%2==0){
        cout<<"Even";
    } else
    {
        cout<<"Odd";
    }
    return;
}

int main(){

    int n;
    cin>>n;

    isEven(n);

    return 0;
}