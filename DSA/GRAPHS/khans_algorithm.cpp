#include <bits/stdc++.h>
// there is the concept of n degree which means that the number of nodes incoming in the node is call the n degree
// it is the array in which all the indices will store the number of incoming edges
// called incoming array
// the  number whose degree is 0 can appear in the begining as no one is efore them
// we will insert all the nodes with zero 
// the first number which we have entered into the stack must bbe before some node
// we will push those number into the satck and decrease there indegree
// then we will pop then stack.top()
// to create the indegree like we have 2=[3,4,5]
// which means 2->3 so we will increase the indegree of 3 4 and 5 in this case

using namespace std;
class Solution{
    public:
    vector<int> toposort(int V, vector<int> adj[]){
        vector<int> indegree(V,0);
        vector<int> topo;
        queue<int>q;
        for(int i=0;i,V;i++){
            for(int val: adj[i]){
                indegree[val]++;
            }
        }
        // we will find the guy whose n degree is 0 so we will insert them into the stack
        for(int i=0;i<V;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        // someone will always be there with indegree of zero 
        while(!q.empty()){
            int node=q.front();
            q.pop();
            topo.push_back(node);

            // now our node is in topo sort so pleae remove it from the indegree
            for(auto it: adj[node]){
                indegree[it]--;
                if(indegree[it]==0) q.push(it);
            }



        }
        return topo;


    }
};

int main(){
    // the code is ini the
    return 0;
}