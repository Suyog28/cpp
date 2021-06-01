#include<iostream>
using namespace std;


void votingCheck(int n){
    if(n>=18){
        cout<<"Candidate is eligible"<< " "<<endl;
    } else{
    cout<<"Candidate is not Eligible, Enter correct Age"<< ""<<endl;
    }

    return;
}


int main(){

    int n;
    cin>>n;
    votingCheck(n);
    return 0;
}