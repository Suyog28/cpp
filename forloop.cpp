#include<iostream>
using namespace std;

int main(){

      #ifndef ONLINE
      freopen("input.txt", "r", stdin);
      freopen("output.txt","w", stdout);
      #endif
    int sum=0, n;

    cin>>n;

    for(int counter=1; counter<=n; counter++){
      sum = sum + counter;
    }

    cout<<sum;
    return 0;
}