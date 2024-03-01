#include <iostream>
using namespace std;

void f(int i, int n) {
    if(i>n) return;
    f(i+1, n);
    cout<<i<<" ";
}

int main() {
    int n;
    cout<<"Enter your no.: ";
    cin>>n;
    f(1,n);
    return 0;
}