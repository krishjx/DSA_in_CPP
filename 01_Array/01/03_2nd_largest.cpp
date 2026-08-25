#include <iostream>
using namespace std;
int main(){
    int n,max=INT_MIN,smax=INT_MIN;
    cout<<"Enter the Size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the value of "<<i+1<<":";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(smax<arr[i] && arr[i]!=max){
            smax=arr[i];
        }
    }
    cout<<smax;
}