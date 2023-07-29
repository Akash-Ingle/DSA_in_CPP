#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main(){
    int n, mx=INT32_MIN;
    //cout<<"Enter the size of the array: ";
    cin>>n;

    int a[n],i;
    //cout<<"Enter the elements of the array: ";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int curr=0;
    for(i=0;i<n;i++){
        curr=0;
        for(int j=i;j<n;j++){
            curr = curr+a[j];
            cout<<curr<<endl;
        }
    }

}