#include<iostream>
using namespace std;

int binaryToDecimal(int bnum){
    int x = 1;
    int ans = 0;
    int lastDigit;
    while(bnum>0){
        lastDigit = bnum % 10;
        ans = ans + lastDigit * x;
        x = x * 2;
        bnum = bnum / 10;
    }
    return ans;
}

int main(){
    int bin;
    cout<<"Enter a binary number: ";
    cin>>bin;

    cout<<"Decimal number is: "<<binaryToDecimal(bin);

}