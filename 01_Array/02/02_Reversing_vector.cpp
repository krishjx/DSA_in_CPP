#include <iostream>
#include <vector>
using namespace std;
void display(vector <int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}
int main(){
    vector <int> v1;
    vector <int> v2;
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
    // via push back
    for(int i=n-1;i>=0;i--){
        v2.push_back(v1[i]);
    }
    display(v2);

    vector <int> v3(n);
    int i1=0,j1=(v1.size())-1;
    while(j1>=0 && i1<n){
        v3[i1]=v1[j1];
        i1++;
        j1--;
    }
    display(v3);
}