#include<iostream>
using namespace std;



void swapNo(int a, int b){

    int temp;

    cout<<"Intial Value:"<<a<<""<<endl;
    cout<<"Intial Value:"<<b<<""<<endl;

    temp=a;
    a=b;
    b=temp;

    cout<<"Swap Value of A becomes:"<<a<<""<<endl;
    cout<<"Swap value of B becomes:"<<b<<""<<endl;
    
    return;
}

int main(){

    int a=10;
    int b=20;

    swapNo(a,b);
    return 0;
}