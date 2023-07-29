#include<iostream>
using namespace std;

int octalToDecimal(int octnum){
    int x = 1;
    int ans = 0;
    int lastDigit;
    while(octnum>0){
        lastDigit = octnum % 10;
        ans = ans + lastDigit * x;
        x = x * 8;
        octnum = octnum / 10;
    }
    return ans;
}

int main(){
    int oct;
    cout<<"Enter an octal number: ";
    cin>>oct;

    cout<<"Decimal number is: "<<octalToDecimal(oct);

}