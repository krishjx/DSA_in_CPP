#include <iostream>
#include <vector>
using namespace std;
void display(vector <int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void swap(int &a,int &b){
    a=a+b;
    b=a-b;
    a=a-b; 
    return;
}
void reverse(int i,int j,vector <int> &v){
    while(j>i){
    swap(v.at(i),v.at(j));
    j--,i++;   
}
return;
}
int main(){
    vector <int> v1;
    int n,k;
    //vector size
    cout<<"Enter the Vector Size:";
    cin>>n;
    //Vector Rotation
    cout<<"Enter the Number of Rotation:";
    cin>>k;
    //Vector input
    for(int i=0;i<n;i++){
        int x; 
        cout<<"Enter the value of:"<<i+1<<":";
        cin>>x;
        v1.push_back(x);
    }
    display(v1);
    reverse(0,n-k-1,v1);
     
    reverse(n-k,n-1,v1);
     
    reverse(0,n-1,v1);        
    display(v1);   
}