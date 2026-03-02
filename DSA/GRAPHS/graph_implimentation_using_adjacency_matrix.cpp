#include <bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter the value of n and m"<<endl;
    int n, m;
    cin>>n>>m;
    // adjacency matrix
    vector<vector<int>> adj(n+1,vector<int>(n+1,0));
    // input_edges
    for(int i=0;i<m;i++){
        cout<<"Enter the value of u and v"<<endl;
        int u,v;
        cin>>u>>v;
        adj[v][u]=1;
        adj[v][u]=1;
    }

    return 0;
}