#include <iostream>

using namespace std;

int main(){

    int num;
    cout<<"Enter a number:-"<<endl;
    cin>>num;

        for(int i=0; i<=num; i++){
            if(i%2==0){
                continue;
            }

            cout<<"Number is prime"<<i<<endl;
        }

}