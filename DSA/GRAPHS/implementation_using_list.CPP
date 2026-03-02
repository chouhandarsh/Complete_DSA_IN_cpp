#include <bits/stdc++.h>
#include <list>
#include <vector>
// it is the doubly link list so we can push_front and push_back
// we can also pop_front and pop_back()
// for every vertex we store the neighbour information in the list 
// we will use the dynamic array to sore the information
// for dynamic array we add star in the begning
using namespace std;
class Graph{
    int V;
    // this is dynamic list
    list<int> *l;//int * arr; we are defining a array in which the data stored in the array is list<int> 
public:
    Graph(int V){
        this->V=V;
        l= new list<int> [V];
        // arr= new int[V]
    }
    // when the number entered is 1,3 then in the adjustancy list of 1 we will store 2 and in the adjustancy list of 3 we will store 1
    void addEdge(int u, int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }
    void print(){
        for(int i=0;i<V;i++){
            cout<<i<<": ";
            for(int neigh:l[i]){
                cout<<neigh<<" ";
            }
            cout<<endl;

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
    g.print();
    return 0;


}