#include <bits/stdc++.h>
using namespace std;
// implimenting the weighted graph
class Graph{
public:
    int V;
    vector<vector<pair<int, int>>> adj;

    Graph(int V){
        this->V = V;
        adj.resize(V);
    }

    void AddEdge(int u, int v , int w){
        adj[u].push_back({v,w});
    }

    void printGraph(){
        for(int i=0; i<V; i++){
            cout<<i<<"->";
            for(auto it: adj[i]){
                cout<<"("<<it.first<<" "<<it.second<<" "<<")";
            }
            cout <<endl;
        }
    }
};
class Solution{
public:
    void topoSortdfs(int val , vector<vector<pair<int, int>>> &adj, vector<bool> &vis, stack<int> &st){
        vis[val]=true;
        for(auto it: adj[val]){
            int v = it.first;
            if(!vis[v]){
                topoSortdfs(v, adj, vis, st);
            }
        }
        st.push(val);
    }

    vector<int> SortestPath(vector<vector<pair<int, int>>> &graph, int src){
        // TODO: implement the shortest path logic
        int n=graph.size();
        vector<bool > vis(n,false);
        stack<int> st;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                topoSortdfs(i,graph,vis,st);
            }
        }
        // after completion of these we will get the stack then we will call then if target is given then we will take the distance from the target else
        // we will take the distance form the zero and we will take a  vector whose all the elements have the value as infinite we will take the each node and finds the distance and compare the distace if it is less than the previous stred distace then we will repalce the previous value with current value
        vector<int> dis(n,INT_MAX);
        dis[src]=0;
        // distance from self is zero
        while(!st.empty()){
            int node=st.top();
            st.pop();
            if(dis[node]!=INT_MAX){
                for(auto it: graph[node]){
                    int v= it.first;
                    int wt= it.second;
                    if(dis[node]+wt<dis[v]){
                        dis[v]=dis[node]+wt;
                    }
                }
            }
            
        }
        return dis;
      
        
    }
};
// we have been given to find the sortest distance between two points in directed acylic graph
//since it is a DAG so if we will use topological sorting then we will be able to know which point is comming aheafd of which point then we will
// we will define a array in which infinite will be stored then we will find the distance of all the points in the array from the target value that is the main goal
// there are two method of topological sort we will try to do it with both the method


// now we got the stack in which the elemeents are pushed in the topological order so now we  will do step 2 in which we will find the distance of the start node from each point




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
    g.printGraph();
    Solution S;
    vector<int> ans=S.SortestPath(g.adj, 0);
    int n=ans.size();
    for(int i=0;i<n;i++){
        if(ans[i]==INT_MAX){
            cout<<"INFINITE"<<" ";
        }
        else{
            cout<<ans[i]<<" ";
        }
    }
    return 0;

    
    
    
    
}