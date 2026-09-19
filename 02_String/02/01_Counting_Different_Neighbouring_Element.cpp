#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string:-";
    getline(cin,s);
    int count=0,i=1;
    int n=s.length();
    while(i<n-1){
        if(s[i]!=s[i-1] && s[i]!=s[i+1]){count++; i++;}
        else{i=i+1;}
    }
    cout<<count;
    return 0;
}