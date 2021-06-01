#include<iostream>
using namespace std;


void charCheck(char c){
    if((c>=65 && c<=90)||(c>=97 && c>= 122)){
        cout<<"Alphabate"<<endl;
    } else if(c>=48 && c<=57){
        cout<<"Number"<<endl;
    }
    return;
}


int main(){

char c;
cin>>c;

charCheck(c);
    return 0;
}