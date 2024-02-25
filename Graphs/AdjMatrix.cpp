// T.C = O(m),  S.C = O(n*n)

#include <iostream>
using namespace std;

int main() {
    int n,m; // n is no. of nodes & m is no. of edges
    cin>>n>>m;
    // graph here
    int adj[n+1][n+1]; // n+1 for 1 indexed graph
    for(int i=0; i<m; i++) {
        int u,v;
        cin>>u>>v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
    return 0;
}