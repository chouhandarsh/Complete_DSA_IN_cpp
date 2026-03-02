#include <bits/stdc++.h>
using namespace std;
class Graph{
    int V;
    vector<vector<pair<int,int>>> adj;
public:
    Graph(int V){
        this->V=V;
        adj.resize(V);
    }
    void addEdge(int u, int v, int w){
        adj[u].push_back({v,w});
    }
    void print(vector<vector<pair<int, int>>> adj){
        int n=adj.size();
        for(int i=0;i<n;i++){
            cout<<i<<"->";
            for(auto it: adj[i]){
                cout<<"{ "<<it.first<<", "<<it.second;
            }
            cout<<endl;
        }
    }
};
class Solution{
    void topologicalSort(int val,vector<vector<pair<int,int>>>adj, vector<bool> &vis,stack<int> &st){
        vis[val]=true;
        for(auto it: adj[val]){
            if(!vis[val]){
                int u=it.first;
                int d=it.second;

                topologicalSort(u,adj,vis,st);
            }
        }
        st.push(val);
    }
    // afte this we have the stack in topological order
    vector<int> shortestPath(vector<vector<pair<int, int>>> adj,int start){
        int n=adj.size();
        vector<bool> vis(n,false);
        stack<int> st;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                topologicalSort(i,adj,vis,st);
            }
        }
        vector<int> dis(n,INT_MAX);
        dis[start]=0;
        // in the stack the element are stored in reversed toplological order 0 pahile aa raha hai to 0 paur hoga uske niche jobhi honge wo uske bad wale honge
        while(!st.empty()){
            int node=st.top();
            st.pop();
            if(dis[node]!=INT_MAX){
                for(auto it: adj[node]){
                    int v=it.first;
                    int d=it.second;
                    if(dis[node]+d<dis[v]){
                        dis[v]=dis[node]+d;
                    }

                }
            }
        }
        return dis;
    }

};
int main(){
    return 0;
}