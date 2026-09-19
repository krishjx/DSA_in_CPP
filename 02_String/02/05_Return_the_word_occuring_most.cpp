#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;
int main(){
    string str="Krish is a Btech is  maths maths 2nd year Student at RECB. He is maths very Good in Academics.";
    stringstream ss(str);
    string temp;
    vector<string> v;
    
    while(ss>>temp){
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int count=1,maxcount=0;
    for(int i=1;i<v.size();i++){
        if(v[i-1]==v[i]){
            count++;
        }
         else{count=1;}
        if(maxcount<count){maxcount=count;}
       
    }
    count=1;
     for(int i=1;i<v.size();i++){
     if(v[i-1]==v[i]){
         count++;
     }
     else{count=1;}
     if(maxcount==count){
        cout<<v[i]<<" "<<maxcount<<endl;
     }
     
     
 }
    
}