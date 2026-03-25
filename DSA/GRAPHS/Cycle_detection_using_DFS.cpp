#include <bits/stdc++.h>
using namespace std;
class Graph{
public:
    int V;
    vector<list<int>> l;
public:
    Graph(int V){
        this->V=V;
        l.resize(V);
    };
    void Add_Edge(int v, int u){
        l[v].push_back(u);
        l[u].push_back(v);
    }
    bool Detect_Helper( int node, int parent,vector<list<int>>& adj, vector<bool>&vis){
        vis[node]=true;
        for(auto adjNode: adj[node]){
            if(!vis[adjNode]){
                // in this case the node is the parent
                if(Detect_Helper(adjNode,node, adj, vis)){
                    return true;
                }
            }
            else{

                if(adjNode!=parent){
                    return true;
                }
            }
        }
        return false;
    };
    bool Detect_Cycle(vector<list<int>> adj){
        int n = adj.size();
        vector<bool> vis(n,false);
        for(int i=1;i<n;i++){
            if(!vis[i]){
                if(Detect_Helper(i,-1, adj, vis)){
                    return true;
                }
            }
        }
        return false;
    }
    

};
int main(){
    vector<list<int>> adj={{},{2,3},{1,5},{1,4,6},{3},{2,7},{3,7},{5,6}};
    Graph g(7);
    bool ans= g.Detect_Cycle(adj);
    cout<<ans<<endl;
    return 0;
}