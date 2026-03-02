#include<bits/stdc++.h>
using namespace std;
class Graph{
    int V;
    list<int>*l;
public:
    Graph(int V){
        this->V=V;
        l= new list<int>[V];
    }
    void addEdge(int v, int u){
        l[v].push_back(v);
    }
    // cycle detection
    bool isCycleHelper(int curr, vector<bool>& vis, vector<bool>& recurrPath){
        vis[curr]=true;
        recurrPath[curr]=true;
        for(int v:l[curr]){
            if(!vis[v]){
                if(isCycleHelper(v, vis, recurrPath)){
                    return true;
                }
            }
            else if(recurrPath[v]){
                return true;
            } 

        }
        recurrPath[curr]=false;
        return false;

    }
    bool isCycle(){
        vector<bool> vis(V,false);
        vector<bool> recurrPath(V,false);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(isCycleHelper(i, vis,recurrPath)){
                    return true;
                }

            }
            
            
        }
        return false;

    }


};

int main(){
    Graph g(4);
    g.addEdge(1,0);
    g.addEdge(0,2);
    g.addEdge(2,3);
    g.addEdge(3,0);
    bool ans= g.isCycle();
    cout<<ans<<endl;

    return 0;
}