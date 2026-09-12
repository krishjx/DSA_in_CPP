#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    char s[n];
    cout<<"Enter the String:-";
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    // getline(cin,s);
    int count=0;
    for(int i=0;s[i]!=0;i++){
        if(s[i]=='a' || s[i]=='e'|| s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A' || s[i]=='E'|| s[i]=='I'||s[i]=='O'||s[i]=='U'){count++;}
    }
    cout<<"Number of Vowels:-"<<count;
}