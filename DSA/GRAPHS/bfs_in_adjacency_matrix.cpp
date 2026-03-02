#include <bits/stdc++.h>
using namespace std;
void dfs(int i, int n, vector<vector<int>>& adj, vector<bool> vis){
    vis[i]=true;
    cout<<i<<" ";
    // now we will finds its other connections in the row
    for(int j=1;j<=n;j++){
        if(adj[i][j]==1&& !vis[j]){
            dfs(j,n,adj,vis);
        }

    }
}
int main(){
    cout<<"Enter the value of n and m"<<endl;
    // n is the edge and m is the total number of connection it has
    int n, m;
    
    cin>>n>>m;
    vector<vector<int>> adj(m+1, vector<int>(n+1,0));
    for(int i=0;i<m;i++){
        cout<<"Enter the value of u and v"<<endl;
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;
    }
    vector<bool> vis(n+1,false);
    dfs(1,n,adj,vis);    
    return 0;
}