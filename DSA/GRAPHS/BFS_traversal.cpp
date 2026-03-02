// the full form is breadth first search
// it says that we will first travel the immediate neighboour before travelling to any other node 
// there is no heriarcial structure so we will have to store the visited node
#include <bits/stdc++.h>
using namespace std;
class Graph{
    int V;
    list <int> *l;
public:
    Graph(int V){
        this->V=V;
        l=new list<int>[V];
    }
    void addEdge(int u, int v){
        l[u].push_back(v);
        l[v].push_back(u);    
    }
    void print(){
        for(int i=0;i<V;i++){
            cout<<i<<": ";
            for(int neigh: l[i]){
                cout<<neigh<<" ";
            }
            cout<<endl;
        }
    }
    void bfs(){
        queue<int> q;
        vector<bool> vis(V,false);
        vis[0]=true;
        q.push(0);
        while(q.size()>0){
            int u= q.front();// q is the source
            q.pop();
            cout<<u<<" ";
            for(int v: l[u]){
                // we were having the list inside the array and its index were from 0 to V-1 so we will since the list in inside the array now we will extract their neighbour's value from it
                // we will check if it is not visited if it not so then we will print it
                if(!vis[v]){ // v is the immediate neighbour
                    vis[v]=true;
                    q.push(v);

                }
            }


        }



    }

};
int main(){
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(2,4);
    g.addEdge(1,3);
    g.bfs();
    

}