#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
public:
    Node(int data){
        this->data=data;
        left= NULL;
        right= NULL;
    }
};
int idx=-1;

Node* BuildTree( vector<int>arr ){
    idx++;
    if(arr[idx]==-1 ){
        return NULL;
    }
    Node* node = new Node(arr[idx]);
    node->left= BuildTree(arr);
    node->right= BuildTree(arr);
    return node; 
}
// now i have to burn the tree and we will be given the node from which the fire will start and the main point is that the node which will
// be at the equal distance will burn at  the same time
// the main issue in this was to find how we will go to the parent node if fire in on the child so we will have to store
//store whose parent is whoeme fro which we will use the map
void StoreParent(Node* head, unordered_map<Node* ,Node*> &mp){
    if(head==NULL){
        return;
    }
    // if it is a leaf node then it will be the parent of no one
    if(head->left==NULL && head->right==NULL){
        return;
    }
    // if the left and right is not null then node is its parent
    if(head->left!=NULL){
        mp[head->left] = head;

    }
    if(head->right!=NULL){
        mp[head->right]= head;
    }
    //we  will recurisverly call for next left and right
    StoreParent(head->left, mp );
    StoreParent(head->right, mp);
}
// now we will need a mp to store the burned node
// in this also we will use the breadth fist algorithm
Node* findNode(Node* root, int target){
    if(root == NULL) return NULL;
    if(root->data == target) return root;

    Node* left = findNode(root->left, target);
    if(left) return left;

    return findNode(root->right, target);
}
int Time(Node* head, Node* start){
    int time=0;
    // now i will call the function to know the parent
    unordered_map<Node*,Node* >mp;
    StoreParent(head, mp);
    unordered_map<Node*, int> vis;
    queue<Node*> q;
    q.push(start);
    vis[start]++;
    // now in each for loop in bfs travesal one unit of time will be consumed
    // there may be cases in which we will enter the while loop but we will not burn any element in that case we cannot increase the time

    while(q.size()>0){
        bool  burnt = false;
        
        
        int n=q.size();
        for(int i=0;i<n;i++){
            Node* node =q.front();
            q.pop();
            if(node->left!=NULL && vis.find(node->left)==vis.end()){

                q.push(node->left);
                vis[node->left]++;
                burnt=true;
            }
            if(node->right!=NULL && vis.find(node->right)==vis.end()){
                q.push(node->right);
                vis[node->right]++;
                burnt=true;

            }
            if(mp.find(node)!=mp.end() && vis.find(mp[node])==vis.end()){
                q.push(mp[node]);
                vis[mp[node]]++;
                burnt=true;
            }
        }
        if( burnt ) time++;
        
    }
    return time;
}

int main(){
    vector<int> arr{1, 2, 4, -1, 7, -1, -1, -1, 3, 5, -1, -1, 6, -1, -1};
    Node* root= BuildTree(arr);

    return 0;
}