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
}
int main(){
    vector <int> v1;
    int n;
    //vector size
    cout<<"Enter the Vector Size:";
    cin>>n;
    //Vector input
    for(int i=0;i<n;i++){
        int x; 
        cout<<"Enter the value of:"<<i+1;
        cin>>x;
        v1.push_back(x);
    }
    display(v1);
    
    int i=0,y=n-1;
    while(y>i){
        swap(v1.at(i),v1.at(y));
        i++;
        y--;
    }
    display(v1);
    
    
    
    

    

    
    
    
    
    
    
    
}