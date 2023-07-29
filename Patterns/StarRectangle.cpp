#include <iostream>
using namespace std;

int main(){
    int row,col;
    cout<<"Enter the no. of rows and columns ";
    cin>>row>>col;
    int i,j;

    for(i=1;i<=row;i++){
       for(j=1;j<=col;j++){
        cout<<"* ";
       }
       cout<<endl;
    }

}