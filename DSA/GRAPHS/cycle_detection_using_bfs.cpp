#include <bits/stdc++.h>
using namespace std;
class Graph{
    int V;
    vector<list<int>> l;
public:
    Graph(int V){
        this->V=V;
        l.resize(V);
    }
    void addEdge(int v, int u){
        l[v].push_back(u);
        l[u].push_back(v);
    }
    bool isCycleHelper(int src, vector<bool> &vis){
        // we will have the pair of interger and the thing that it will store will be the number and their parents class
        // the first selected number dont have any parent so we wi;; append it with -1
        queue<pair<int, int>> q;
        q.push({src,-1});
        vis[src]=true;
        while(q.size()>0){
            int u= q.front().first;
            int parentU= q.front().second;// the parentU referes to the parent of U
            q.pop();
            list<int> neighbour =l[u];
            for(int v: neighbour){
                if(!vis[v]){
                    q.push({v,u});
                    vis[v]=true;

                }
                else if(vis[v]){
                    // we are adding the conditon for the loop beause if the node is visited then this means that the its parent is not -1 if we will not
                    // then every one parent will assinged as -1
                    if(v!=parentU){//cycle condition
                        return true;
                    }
                }
            }
        }
        return false;
    }
    bool isCycle(){
        vector<bool> vis(V, false);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(isCycleHelper(i, vis)){
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