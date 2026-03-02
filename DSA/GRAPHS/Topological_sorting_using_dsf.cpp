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

};
int main(){
    Graph g(6);
    g.addEdge(5,0);
    g.addEdge(4,0);
    g.addEdge(5,2);
    g.addEdge(2,3);
    g.addEdge(3,1);
    g.addEdge(4,1);
    return 0;
}