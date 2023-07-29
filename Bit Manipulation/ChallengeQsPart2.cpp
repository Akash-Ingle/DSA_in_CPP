#include <iostream>
using namespace std;

int unique1Num(int arr[], int n){
    int xorsum=0;
    for(int i=0; i<n; i++){
        xorsum = xorsum ^ arr[i];
    }
    return xorsum;
}

int setBit(int n, int pos){
    return ((n & (1<<pos)) !=0);
}

void unique2Nums(int arr[], int n){
    int xorsum = 0;
    for(int i=0; i<n; i++){
        xorsum = xorsum ^ arr[i];
    }
    int tempxor = xorsum;
    int setbit = 0;
    int pos=0;
    while(setbit!=1){
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum>>1;
    }
    int newxor = 0;
    for(int i=0; i<n; i++){
        if(setBit(arr[i], pos-1)){
            newxor = newxor ^ arr[i];
        }
    }
    cout<<newxor<<endl;
    cout<<(tempxor ^ newxor)<<endl;

}

bool getBit(int n, int pos){
    return ((n & (1<<pos))!=0);
}

int setBittt(int n, int pos){
    return (n | (1<<pos));
}

int uniqueNumIn3s(int arr[], int n){
    int result =0;
    for(int i=0; i<64; i++){
        int sum=0;
        for(int j=0; j<n; j++){
            if(getBit(arr[j],i)){
                sum++;
            }
        }
        if(sum%3!=0){
            result = setBittt(result, i);
        }
    }
    return result;
}

int main(){
     //int arr[] = {1,4,3,2,3,2,1,3,3,1,2};
    // cout<<unique1Num(arr, 7)<<endl;
    //int arr[] = {1,2,3,1,2,3,7,5,3,2,3,2,1,2,2};
    //unique2Nums(arr, 8);
    int arr[] = {1,2,3,4,1,2,3,1,2,3};
    cout<<uniqueNumIn3s(arr, 10);
    return 0;
}