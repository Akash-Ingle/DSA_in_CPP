#include <set>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,k;
    cout<<"Enter the no. of nos. and k: ";
    cin>>n>>k;
    vector<int> a(n);
    for(auto &i:a){
        cin>>i;
    }
    multiset<int, greater<int>> s;
    vector<int> ans;
    for(int i = 0 ; i<k; i++){
        s.insert(a[i]);
    }
    ans.push_back(*s.begin());
    for(int i=k; i<n; i++){
        s.erase(s.find(a[i-k]));
        s.insert(a[i]);
        ans.push_back(*s.begin());
    }
    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
}