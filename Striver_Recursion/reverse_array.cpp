#include <iostream>
using namespace std;

void f(int i, int arr[], int n) {

    // base condition
    if(i>=n/2) return;

    swap(arr[i], arr[n-i-1]);
    f(i+1, arr, n);

}

int main() {

    int n;
    cout<< "Enter the size of the array: ";
    cin>> n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    f(0, arr, n);

    cout<<"The reversed array is: ";
     for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;

}