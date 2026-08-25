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
int main(){
    vector <int> v1;
    int n,i1,y1;
    //vector size
    cout<<"Enter the Vector Size:";
    cin>>n;
    //taking Input To reverse Part
    cout<<"Enter the Starting Index:";
    cin>>i1;
    cout<<"Enter the Ending Index:";
    cin>>y1;
    //Vector input
    for(int i=0;i<n;i++){
        int x; 
        cout<<"Enter the value of:"<<i+1<<":";
        cin>>x;
        v1.push_back(x);
    }
    display(v1);
    
    int i=0,y=n-1;
    while(y1>i1){
        swap(v1.at(i1),v1.at(y1));
        i1++;
        y1--;
    }
    display(v1);   
}