#include<iostream>
using namespace std;

int main(){

    char n;
    cin>>n;

    if(n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u'|| n== 'A' || n == 'E' || n=='I' || n=='O' || n=='U'){
        cout<<"Vowel"<<endl;
    } else{
        cout<<"Consonants"<<endl;
    }
    return 0;
}