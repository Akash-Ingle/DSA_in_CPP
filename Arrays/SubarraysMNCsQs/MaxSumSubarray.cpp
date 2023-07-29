// O(n^3) time complexity
// #include <iostream>
// #include <climits>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int maxSum = INT_MIN;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             int sum=0;
//             for(int k=i;k<=j;k++){
//                 //cout<<a[k]<<" ";
//                 sum=sum+a[k];
//             }
//             //cout<<endl;
//             maxSum = max(maxSum, sum);
//         }
//     }
//     cout<<maxSum<<endl;
    
//     return 0;
// }

// O(n^2) time complexity

// #include <iostream>
// #include <climits>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int maxSum = INT_MIN;
//     for(int i=0;i<n;i++){
//         int sum = 0;
//         for(int j=i;j<n;j++){
//             sum=sum+a[j];
//             maxSum=max(sum,maxSum);
//         }
//     }

//     cout<<maxSum<<endl;
//     return 0;
// }

// O(n) time complexity (Kadane's Algorithm)

#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cin>> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int currSum = 0;
    int maxSum = INT_MIN;
    for(int i=0;i<n;i++){
        currSum = currSum + a[i];
        if(currSum<0) currSum=0;
        maxSum = max(maxSum, currSum);
    }
    cout<<maxSum<<endl;
    return 0;
}
