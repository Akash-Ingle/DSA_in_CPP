#include <iostream>
using namespace std;

bool isPoweOf2(int n){
    return (n && !(n & (n-1)));
}

int numberOf1sInBinary(int n){
    int count = 0;
    while(n){
        n = n & (n-1);
        count++;
    }
    return count;
}

void subsets(int arr[], int n){
    for(int i=0; i<(1<<n); i++){
        for(int j=0; j<n; j++){
            if(i & (1<<j)){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}
int main(){
    //cout<<isPoweOf2(16)<<endl;
    //cout<<numberOf1sInBinary(19)<<endl;
    int arr[1] = {0};
    subsets(arr, 1);
    return 0;
}