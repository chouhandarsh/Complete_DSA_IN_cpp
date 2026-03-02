#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    public:
    Node(int val){
        data=val;
        left=right=NULL;

    }
};
int idx=-1;
Node*BuildTree(vector<int> arr){
    idx++;
    if(arr[idx]==-1){
        return NULL;
    }
    Node* root = new Node(arr[idx]);
    root->left= BuildTree(arr);
    root->right=BuildTree(arr);
    return root;
    
}
// TOP VIEW OF A BINARY TREE
// we will do the level order travesal and we will assng a left and right position as we will move lest we will do -1 and when we will move right we will do +1 and store that into a map
// we will use a queue in which we will store the number and its position as we and we will check in the map if it exists
// the time complexity is O(n*log(n))
// the time complexity for searching im map is log(n)
// the time compexity for travesing in Node is n


void topBuild(Node* root){
    queue<pair<Node*,int>> q;
    q.push({root,0});
    map<int,int>mp;// HD, node->val
    // applying the same logic of level order traversal
    while(q.size()>0){
        Node* curr = q.front().first;
        int currHD=q.front().second;
        q.pop();
        // now we will check if that element's position is in the map or not
        // if it is present in the map before then it will not be added into the map and hence will not be shown 
        // the first value will be the position and the second value will be the value 
        if(mp.find(currHD)==mp.end()){
            mp[currHD]= curr->data;
        }
        if(curr->left!=NULL){
            q.push({curr->left,currHD-1});
        }
        if(curr->right !=NULL){
            q.push({curr->right, currHD+1 });
        }
    }
    for(auto it: mp){
        cout<<it.second<<" ";
    }




}
int main(){    
    vector<int> preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = BuildTree(preorder);
    topBuild(root);



    return 0;
}