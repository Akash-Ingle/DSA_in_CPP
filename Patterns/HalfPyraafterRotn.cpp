#include <iostream>
using namespace std;

int main(){
    int row,col;
    cout<<"Enter the no. of rows: ";
    cin>>row;
    int i,j;

    for(i=1;i<=row;i++){
       for(j=1;j<=row;j++){
        if(j<=row-i) cout<<"  ";
        else cout<<"* ";
       }
       cout<<endl;
    }

}