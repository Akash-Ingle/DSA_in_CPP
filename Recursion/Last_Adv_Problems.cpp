#include <iostream>
using namespace std;

int tilingWays(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return tilingWays(n-1) + tilingWays(n-2);
}

int friendsPairing(int n){
    if(n==0 || n==1 || n==2) return n;
    return friendsPairing(n-1) + friendsPairing(n-2)*(n-1);
}

int knapsack(int value[], int wt[], int n, int W){
    if(n==0 || W==0) return 0;
    if(wt[n-1] > W) return knapsack(value, wt, n-1, W);
    return max(knapsack(value, wt, n-1, W-wt[n-1])+value[n-1], knapsack(value, wt, n-1, W));
}

int main(){
    // cout<<tilingWays(4)<<endl;
    // cout<<friendsPairing(4)<<endl;
    int wt[] = {10, 20, 30};
    int value[] = {100, 50, 150};
    int W=50;
    cout<<knapsack(value, wt, 3, W)<<endl;
    return 0;
}