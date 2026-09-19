#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string s="Krish  is a RECB Student.";
    stringstream ss(s);     //now we putting s in ss
    string temp;            //we are creating temp
    while(ss>>temp){        //now each word at a time is push into temp
        cout<<temp<<endl;
    }
}
