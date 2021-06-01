#include <iostream>

using namespace std;

int main(){

    int n,i;
    cout<<"Enter a number-";
    cin>>n;
    for(i=2; i<n; i++){
        cout<<i<<endl;
        if(n%i==0)
        {
            cout<<"Not Prime"<<endl;
            break;
        }
    }
      if(i==n){
            cout<<"Number is prime"<<endl;
        }
        return 0;
}