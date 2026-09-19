#include <iostream>
#include <string>
using namespace std;
int main(){
    int x;
    cout<<"Enter the Number:-";
    cin>>x;
    string s=to_string(x);
    cout<<"Number of Digit is:-"<<s.length();
    return 0;
}