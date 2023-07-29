#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main(){
    int n;
    //cout<<"Enter the size of the array: ";
    cin>>n;

    int a[n],i;
    //cout<<"Enter the elements of the array: ";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int j=2,curr=2, ans=2;
    int pd = a[1]-a[0];

    while(j<n){
        if(pd == a[j]-a[j-1]){
            curr++;
        }
        else{
            pd = a[j]-a[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    }
    cout<<ans<<endl;
}
