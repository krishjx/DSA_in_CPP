#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number of String:-";
    cin>>n;
    vector <string> str(n);
    for(int i=0;i<n;i++){
        string x;
        cout<<"Enter the "<<i+1<<" element:-";
        cin>>x;
        str[i]=x;
    }
    for(int i=0;i<n;i++){
        cout<<str[i]<<"  ";
    }
    int max=stoi(str[0]);
    int maxS,s;
    for(int i=1;i<n;i++){
        int y=stoi(str[i]);
        if(y>max){max=y;
        s=i;}
    }
    cout<<endl<<"Maximum amount is:"<<max<<" and it's index is:"<<s;

}