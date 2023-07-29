#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no. of rows ";
    cin>>n;
    int i,j;

    for(i=n;i>=1;i--){
       for(j=1;j<=i;j++){
        cout<<"* ";
       }
       cout<<endl;
    }

}