#include<bits/stdc++.h>
using namespace std;
class Graph{
    int V;
    vector<vector<pair<int, int>>> adj;
public:
    Graph(int V){
        this->V=V;
        adj.resize(V);
    }
    void AddEdge(int u, int v, int d){
        adj[u].push_back({v,d});
    }
    vector<vector<pair<int, int>>> getAdj(){
        return adj;
    }


};
class Solution{
public:
    vector<int> Sortest_distance(vector<vector<pair<int,int>>> adj, int start){
        // first we will have to create the indegree matrix
        int n=adj.size();
        vector<int> indegree(n,0);
        for(int i=0;i<n;i++){
            for(auto it: adj[i]){
                indegree[it.first]++;
            }
        }
        // khans_algorihm
        queue<int> q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);
            }

        }
        // we will get the
        vector<int> topo;
        while(!q.empty()){
            int val=q.front();
            q.pop();
            topo.push_back(val);
            for(auto it: adj[val]){
                int v= it.first;
                indegree[v]--;
                if(indegree[v]==0){
                    topo.push_back(v);
                }

            }
        }
        // sortest past using topologically sorted array
        vector<int > dis(n,INT_MAX);
        dis[start]=0;
        // we have an array i which the elements are stored in topological order we just have to extract them
        for(auto node: topo){
            if(dis[node]!=INT_MAX){
                for(auto it: adj[node]){
                    int v=it.first;
                    int d=it.second;
                    if(dis[v]>dis[node]+d){
                        dis[v]=dis[node]+d;

                    }
                }
            }
        }
        return dis;



    }
};
int main(){
    Graph g(8);
    g.AddEdge(0,1,2);
    g.AddEdge(1,3,1);
    g.AddEdge(2,3,3);
    g.AddEdge(4,0,3);
    g.AddEdge(4,2,1);
    g.AddEdge(5,4,1);
    g.AddEdge(6,4,2);
    g.AddEdge(6,5,3);

    Solution S;
    vector<int> ans = S.Sortest_distance(g.getAdj(), 0);

    for(int i=0;i<ans.size();i++){
        if(ans[i]==INT_MAX) cout<<"INFINITE ";
        else cout<<ans[i]<<" ";
    }

    return 0;
}