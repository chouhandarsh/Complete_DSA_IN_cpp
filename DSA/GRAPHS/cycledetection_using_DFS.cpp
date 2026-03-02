#include <bits/stdc++.h>
using namespace std;
class Graph{
    int V;
    list<int> *l;
public:
    Graph(int V){
        this->V=V;
        l= new list<int>[V];
    }
    void addEdge(int v, int u){
        l[v].push_back(u);
        l[u].push_back(v);

    }
    bool isCycleHelper(int src, int prv, vector<bool>& vis){
        vis[src]=true;
        list<int> neighbours=l[src];
        // we will run a loop for each  neighbour and will try to find if it exist or not
        for(int v: neighbours ){
            if(!vis[v]){
                // we will call for its neighbour
                if(isCycleHelper(v,src,vis)){
                    return true;
                }

            }
            // if it is visited but it  is not parent then the cycle is existing
            else if(v!=prv){
                return true;
            }

        }
        return false;

    }
    bool isCycle(){
        vector<bool> vis(V,false);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(isCycleHelper(i,-1,vis)){
                    return true;
                }
            }
        }
        return false;

    }

};

int main(){
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(0,3);
    g.addEdge(1,2);
    g.addEdge(3,4);
    bool ans= g.isCycle();
    cout<<ans<<endl;

    return 0;
}