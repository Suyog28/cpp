#include<iostream>
using namespace std;

int main(){
    
    #ifndef SUYOG_CODE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int sidea, sideb, sidec;

        cout<<"Enter value of trigle\n";
        cin>>sidea>>sideb>>sidec;

if(sidea == sideb && sideb == sidec){
    cout<<"this is Equilatral tringle\n";
} else if(sidea == sideb || sidea == sidec || sideb == sidec)
{
    cout<<"This is a isoscales trigle\n";
}
else{
    cout<<"this is a scalene trigle\n";
}

return 0;
}