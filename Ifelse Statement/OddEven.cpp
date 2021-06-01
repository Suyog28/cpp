#include<iostream>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int num;
    cin>>num;
    if(num%2==0){
        cout<<"Number is Even\n";
    }else
    {
        cout<<"Number is Odd\n";
    }
    return 0;
}