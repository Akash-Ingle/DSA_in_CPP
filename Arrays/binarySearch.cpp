#include<iostream>
using namespace std;

int binarySearch(int arr[], int key, int n){
    int s=0,e=n,mid;
    while(s<=e){
        mid = (s+e)/2;
        if(key==arr[mid]) return mid;
        else if(key<arr[mid]) e = mid-1;
        else s = mid+1;
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";

    int i=0;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the element you want to find: ";
    cin>>key;
    cout<<key<<" is present at index: "<<binarySearch(arr,key,n);

}