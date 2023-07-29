#include <iostream>
using namespace std;

int main(){
    int row,col;
    cout<<"Enter the no. of rows and columns";
    cin>>row>>col;
    int i,j;

// My logic
    // for(i=1;i<=row;i++){
    //     if((i!=1) && (i!=row)){
    //         cout<<"*";
    //         for(j=2;j<=col-1;j++){
    //             cout<<" ";
    //         }
    //         cout<<"*"<<endl;
    //     }
    //     else{
    //         for(j=1;j<=col;j++){
    //             cout<<"*";
    //         }
    //         cout<<endl;
    //     }
    // }

// Better Logic

    for(i=1;i<=row;i++){
       for(j=1;j<=col;j++){
        if(i==1 || i==row || j==1 || j==col){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
       }
       cout<<endl;
    }


}