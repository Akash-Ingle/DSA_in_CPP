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
    for(i=0;i<n;i++){
        mx = max(mx,a[i]);
        cout<<mx<<endl;
    }

}