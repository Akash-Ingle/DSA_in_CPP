#include <iostream>
#include <set>
using namespace std;

int main(){
    multiset<int> s;
    s.insert(4);
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<s.size()<<endl;
    //s.erase(2); //this will erase all 2s
    s.erase(s.find(2)); // this will erase the 1st occurrence of 2 only.
    for(auto i:s){
        cout<<i<<" ";
    }
    return 0;
}