// TC for both unionBySize and unionByRank is O(4*alpha) = constant ; derivation of this not needed.
#include <vector>
#include <iostream>
using namespace std;

class DisjointSet {
    vector<int> rank, size, parent;
    public:
        DisjointSet(int n) {
            rank.resize(n+1, 0);
            size.resize(n+1, 1);
            parent.resize(n+1);
            for(int i=0; i<=n; i++) parent[i] = i;
        }
        int findUPar(int node) {
            if(node == parent[node]) return node;
            return parent[node] = findUPar(parent[node]);
        }
        void unionByRank(int u, int v) {
            int ulp_u = findUPar(u);
            int ulp_v = findUPar(v);
            if(ulp_u == ulp_v) return;
            if(rank[ulp_u] < rank[ulp_v]) parent[ulp_u] = ulp_v;
            else if(rank[ulp_u] > rank[ulp_v]) parent[ulp_v] = ulp_u;
            else {
                parent[ulp_v] = ulp_u;
                rank[ulp_u]++;
            }
        }
        void unionBySize(int u, int v) {
            int ulp_u = findUPar(u);
            int ulp_v = findUPar(v);
            if(ulp_u == ulp_v) return;
            if(size[ulp_u] < size[ulp_v]) {
                parent[ulp_u] = ulp_v;
                size[ulp_v] += size[ulp_u];
            }
            else {
                parent[ulp_v] = ulp_u;
                size[ulp_u] += size[ulp_v];
            }
        }
};
int main() {
    DisjointSet ds(7);
    ds.unionBySize(1,2);
    ds.unionBySize(2,3);
    ds.unionBySize(4,5);
    ds.unionBySize(6,7);
    ds.unionBySize(5,6);
    // if 3 and 7 belong to same graph component or not
    if(ds.findUPar(3) == ds.findUPar(7)) cout<<"Same"<<endl;
    else cout<<"Not same"<<endl;
    ds.unionBySize(3,7);
    if(ds.findUPar(3) == ds.findUPar(7)) cout<<"Same"<<endl;
    else cout<<"Not same"<<endl;
    return 0;
}
