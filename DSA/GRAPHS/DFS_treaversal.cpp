// the main difference in  this traversal is that in this we keep going till the the unvisites neighbour l=unlike of depth first search in which we were going to all the nodes of the  selected root
// we will be using recurssion logic for it
#include <bits/stdc++.h>
using namespace std;
class Graph{
    int V;
    list<int> *l;
public:
    Graph(int V){
        this->V=V;
        l = new list<int>[V];
    }
    void addEdge(int v, int u){
        l[v].push_back(u);
        l[u].push_back(v);
    }
    void print(){
        for(int i=0;i<V;i++){
            cout<<i<<": ";
            for(int val: l[i]){
                cout<<val<<" ";
            }
            cout<<endl;
        }
    }
    void dfsHelper(int u, vector<bool>& vis){
        cout<<u<<" ";
        vis[u]=true;
        for(int v: l[u]){
            if(!vis[v]){
                dfsHelper(v, vis);
            }
            
        }
    }
    void dfs(){

        vector<bool> vis(V,false);
        dfsHelper(0, vis);
    }
};

int main(){
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(2,4);
    g.addEdge(1,3);
    int u =0;
    g.dfs();
    return 0;
}