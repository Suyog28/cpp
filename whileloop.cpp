#include<iostream>
using namespace std;

int main(){

      #ifndef ONLINE
      freopen("input.txt", "r", stdin);
      freopen("output.txt","w", stdout);
      #endif
    
    int n,i;

    cin>>n;

    while(i<=n){
        cout<<i<<endl;
        i++;
    }

    return 0;
}