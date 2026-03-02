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
        l[v].push_back(u);
    }
};
int main(){
    Graph g(6);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(3,4);
    g.addEdge(3,6);
    g.addEdge(2,5);
    g.addEdge(5,7);
    g.addEdge(6,7);
    return  0;
}