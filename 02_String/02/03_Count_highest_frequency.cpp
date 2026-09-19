#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
string c="leetcode";
vector <int> v(26,0);
//counting each letter and increasing the value of vector v
for(int i=0;i<c.size();i++){
    char ch=c[i];
    int ascii=(int)ch;
    v[ascii-97]++;
}
//finding the max one
int mx=0;
for(int i=0;i<26;i++){
    if(v[i]>mx){mx=v[i];}
}
//printing the hisghest one
for(int i=0;i<26;i++){
    if(v[i]==mx){
        int ascii=i+97;
        char ch=(char)ascii;
        cout<<ch<<" "<<mx<<endl;
    }
}
}
