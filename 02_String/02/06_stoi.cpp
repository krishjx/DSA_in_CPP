#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="185449871";
    int x=stoi(s);
    cout<<x+1<<endl;

    //if number is large enough we use long long 
    long long int y =stoll(s);
    cout<<y ;
}