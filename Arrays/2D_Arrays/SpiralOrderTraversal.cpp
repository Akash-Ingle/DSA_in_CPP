#include <iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter rows and columns: ";
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int row_start = 0, column_start = 0, row_end = n-1, column_end = m-1;
    while ((row_start<=row_end) && (column_start<=column_end))
    {
        // for 0th row CURRENTLY
        for(int col=column_start; col<=column_end; col++){
            if((row_start<=row_end) && (column_start<=column_end)) cout<<arr[row_start][col]<<" ";
        }
        row_start++;

        //for last column CURRENTLY
        for(int row=row_start; row<=row_end; row++){
            if((row_start<=row_end) && (column_start<=column_end)) cout<<arr[row][column_end]<<" ";
        }
        column_end--;

        //for last row(CURRENTLY) reverse traversal
        for(int col=column_end; col>=column_start; col--){
            if((row_start<=row_end) && (column_start<=column_end)) cout<<arr[row_end][col]<<" ";
        }
        row_end--;

        //for starting column(CURRENTLY) reverse traversal
        for(int row=row_end; row>=row_start; row--){
            if((row_start<=row_end) && (column_start<=column_end)) cout<<arr[row][column_start]<<" ";
        }
        column_start++;
    }
    
    return 0;
}