#include<iostream>
using namespace std;

int main()
{
    #ifndef SUYOG_CODE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    int min, max, n1, n2;
    cin>>n1>>n2;
    cin>>min>>max;

    if(n1>n2){
        max=n1;
        min=n2;
    } else{
        max=n2;
        min=n1;
    }
    cout<<"Max="<<max<<"\n";
    cout<<"Min="<<min<<"\n";

    return 0;
}