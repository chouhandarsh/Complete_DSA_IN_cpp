// it is done for directed acyclic graph
// topological sort means that the linear ordering of of vertices such that for every directed edge u-> v, vertex comes before v in the otrder
// when we are doing bfs traversal in that case we are visiting u first then v but the problem in this is that when we reached v we dont know that is there more u which is pointing towards that same v 
// we will have to go to v then find all the u which are pointing towards the v so can achieve this by adding the numbers in stack then pop out
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
    void addEdge(int u, int v){
        l[u].push_back(v);
    }
    void dfs(int curr, vector<bool> & vis, stack<int>& s){
        vis[curr]=true;
        for(int v: l[curr]){
            if(!vis[v]){
                dfs(v, vis, s);
            }
        }
        s.push(curr);
    }
    void topoSort(){
        vector<bool> vis(V,false);
        stack<int>s;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                dfs(i, vis,s);

            }
        }
        // after this we will have the stack with elements in it
        while(!s.empty()){
            cout<<s.top()<<endl;
            s.pop();

        }


    }
};
int main(){
    Graph g(6);
    g.addEdge(5,0);
    g.addEdge(4,0);
    g.addEdge(5,2);
    g.addEdge(2,3);
    g.addEdge(3,1);
    g.addEdge(4,1);
    g.topoSort();


    return 0;
}