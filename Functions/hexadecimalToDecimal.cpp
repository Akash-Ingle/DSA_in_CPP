#include<iostream>
#include<string>
using namespace std;

int hexadecimalToDecimal(string hexnum){
    int x = 1;
    int ans = 0;
    int i;
    for(i=hexnum.size()-1; i>=0; i--){
        if(hexnum[i]>='0' && hexnum[i]<='9')
            ans += x * (hexnum[i]-'0');
        else if(hexnum[i]>='A' && hexnum[i]<='F')
            ans += x * (hexnum[i]-'A' + 10);
        x *= 16;
    }
    return ans;
}

int main(){
    string hex;
    cout<<"Enter a hexadecimal number: ";
    cin>>hex;

    cout<<"Decimal number is: "<<hexadecimalToDecimal(hex);

}