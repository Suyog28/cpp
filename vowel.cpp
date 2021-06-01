#include <iostream>
using namespace std;

int main(){

    char ch;
    cout<<"Enter Letter";
    cin>>ch;

    switch (ch)
    {
    case 'a':
        cout<<"It is vowel"<<endl;
        break;

        case 'e':
        cout<<"It is vowel"<<endl;
        break;

        case  'i':
        cout<<"It is vowel"<<endl;
        break;

        case 'o':
        cout<<"It is vowel"<<endl;
        break;

        case 'u':
        cout<<"It is vowel"<<endl;
        break;
    
    default:
    cout<<"It is consonant"<<endl;
        break;
    }
    return 0;
}