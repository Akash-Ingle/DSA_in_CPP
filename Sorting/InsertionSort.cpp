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
    int current,j;
    for(i=1;i<n;i++){
        current = a[i];
        j=i-1;
        while(a[j]>current && j>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=current;
    }
    cout<<"Elements in sorted order are: ";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}