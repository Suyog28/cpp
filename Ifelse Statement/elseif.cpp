#include <iostream>

using namespace std;

int main(){

    #ifndef SUYOG_CODING
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
    #endif
    
    int x,y;
    cin>>x>>y;

if(x == y){
    cout<<"Both the number are equel\n";
} else if (x > y)
{
    cout<<"X is greater\n";
} else
{
    cout<<"Y is greater\n";
}


return 0;
}