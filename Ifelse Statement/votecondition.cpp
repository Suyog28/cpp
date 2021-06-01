#include <iostream>
using namespace std;

int main(){

  #ifndef ONLINE_SUYOG
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int age;
    cin>>age;

if(age >= 18)
{
   cout<<"You are eligible for Voting\n";
} else
{
    cout<<"Not Eligible\n";
}
return 0;
}
