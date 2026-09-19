#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout<<"Enter the String:-";
    getline(cin,s);
    int n=s.size();
    int count=0;

    cout<<s<<endl;
    reverse(s.begin()+0,s.begin()+(n/2));
    cout<<s<<endl;
}