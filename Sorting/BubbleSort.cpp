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
    int counter = 1,temp;
    while(counter<n){
        for(i=0;i<n-counter;i++){
            if(a[i]>a[i+1]){
                temp = a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        counter++;
    }

    cout<<"Elements in sorted order are: ";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}