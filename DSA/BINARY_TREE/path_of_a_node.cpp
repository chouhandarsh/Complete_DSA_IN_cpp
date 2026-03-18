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
        left=NULL;
        right=NULL;
    }
    
};
int idx=-1;
Node* TreeFormation(vector<int> arr){
    idx++;
    if(arr[idx]==-1){
        return NULL;
    }
    Node* node= new Node(arr[idx]);
    node->left = TreeFormation(arr);
    node->right = TreeFormation(arr);
    return node;

}
bool getPath(Node* root, vector<int> &path, int x){
    if(root==NULL) return false;
    //Add current node
    path.push_back(root->data);
    // if target found
    if(root->data==x) return true;
    // Search for left or right
    if(getPath(root->left, path, x) || getPath(root->right,path,x)){
        return true;
    }
    path.pop_back();
    return false;
}
vector<int> rootToNodePath(Node* root, int x){
    vector<int> path;
    if(root==NULL){
        return path;
    }
    getPath(root,path, x);
    return path;
    
    

}
int main(){
    return 0;
}