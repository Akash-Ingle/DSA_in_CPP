#include <iostream>
using namespace std;

int Sum(int n){
    if(n==0) return 0;
    int prevSum = Sum(n-1);
    return n + prevSum;
}

int power(int n, int p){
    if(p==0) return 1;
    int prevPower = power(n, p-1);
    return n*prevPower;
}

int factorial(int n){
    if(n==0) return 1;
    int prevFactorial = factorial(n-1);
    return n * prevFactorial;
}

int fib(int n){
    if(n==0 || n==1) return n; //base case
    return fib(n-1) + fib(n-2);
}

int main(){
    // int n;
    // cin>> n;
    // cout<<Sum(n);
    // cout<<power(4,3);
    // cout<<factorial(4);
    cout<<fib(5);
    return 0;
}