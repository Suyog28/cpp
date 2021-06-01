#include<iostream>
using namespace std;


void maxNo(int a, int b, int c){
    if(a>=b && a>=c){
        cout<<"A is greater:"<<a<<" "<<endl;
    } else if(b>=a && b>=c){
        cout<<"B is greater:"<<b<<" "<<endl;
    } else{
        cout<<"C is greater:"<<c<<" "<<endl;

    }
    return;
}

void minNo(int a, int b, int c){
    if(a<=b && a<=c){
        cout<<"A is mininum:"<<a<<" "<<endl;
    } else if(b<=a && b<=c){
        cout<<"B is minimum:"<<b<<" "<<endl;
    } else{
        cout<<"C is minimum:"<<c<<" "<<endl;

    }
    return;
}


int main(){

    int a,b,c;
    cin>>a>>b>>c;

    maxNo(a,b,c);

    minNo(a,b,c);
   

    return 0;
}