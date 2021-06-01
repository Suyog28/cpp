#include<iostream>
using namespace std;

int main(){
     #ifndef SUYOG_CODE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    char x;
    cout<<"Enter a Alphabate\n";
    cin>>x;

int isLowercaseVowel =(x=='a' || x=='e' || x=='i' || x=='o' || x=='u');
int isUppercaseVowel = (x=='A' || x=='E' || x=='I' || x=='O' || x=='U');

if(isLowercaseVowel || isUppercaseVowel){
    cout<<"It is a Vowel\n";
}else
{
 cout<<"It is a consonant\n";
}
return 0;
}