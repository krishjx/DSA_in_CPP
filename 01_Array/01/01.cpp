#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the value of ",cout<<i+1,cout<<":";
        cin>>arr[i];
    }
}