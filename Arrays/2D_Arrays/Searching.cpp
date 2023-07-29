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
    int x;
    cout<<"Enter the element to be searched: ";
    cin>>x;
    bool flag = false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==x){
                cout<<i<<" "<<j<<endl;
                flag=true;
            }
        }
    }
    if(flag) cout<<"Element found";
    else cout<<"Element not found";

    return 0;
}