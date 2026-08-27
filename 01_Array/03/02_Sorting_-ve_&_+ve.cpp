#include <iostream>
#include <vector>
using namespace std;
void display(vector <int> &v){
    for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
    }
    cout<<endl;
}
void sort01(vector <int> &v){
    int i=0,j=v.size()-1;
    while(i<j){
     if(v[i]>=0 && v[j]<0){
        v[i]=v[i]+v[j];
        v[j]=v[i]-v[j];
        v[i]=v[i]-v[j];
    i++;
    j--;
 }
         if(v[i]<0){i++;}
         if(v[j]>=0){j--;}  
    }
}
int main(){
    vector <int> v;
    int n;
    cout<<"Enter the size of vector:";
    cin>>n;
    //Vector value input
    for(int i=0;i<n;i++){
        int x;
        cout<<"Enter the value of"<<i+1<<":";
        cin>>x;
        v.push_back(x);
    }
    display(v);
    sort01(v);
    display(v);
    sort(v.begin(),v.end());
    display(v);
}