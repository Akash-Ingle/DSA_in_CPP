#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no. of elements: ";
    cin>>n;

    int a[n], i;
    cout<<"Enter the elements: ";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int j,temp;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[j]<a[i]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout<<"Elements in sorted order are: ";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}