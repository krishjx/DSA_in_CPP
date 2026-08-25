#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(7);
    v.push_back(6);
    v.push_back(5);
    cout<<v.at(0)<<endl<<"Size of V:"<<v.size()<<endl<<"Capacity of V:"<<v.capacity()<<endl;
    v.pop_back();
    cout<<v.at(0)<<endl<<"Size of V:"<<v.size()<<endl<<"Capacity of V:"<<v.capacity();
}