#include <bits/stdc++.h>
using namespace std;
class TreeNode{
public:
    int data;
    TreeNode* left;
    TreeNode* right;
public:
    TreeNode(int data1){
        data = data1;
        left= NULL;
        right= NULL;

    }
};
int idx=-1;
TreeNode* buildTree(vector<int> preorder){
    idx++;
    if(preorder[idx]==-1){
        return NULL;
    }
    TreeNode* root = new TreeNode(preorder[idx]);
    root->left = buildTree(preorder);
    root->right=  buildTree(preorder);
    return root;
};
vector<int> preorderTraversal(TreeNode* root) {
    // this is the iterative approach
    stack<TreeNode*> st;
    vector<int> preorder;
    if(root==NULL){
        return {};
    }
    st.push(root);
    while(!st.empty()){
        TreeNode* node=st.top();
        st.pop();
        preorder.push_back(node->data);
            // we are doing it in this way becasuse then left will be in the top due to LIFO
        if( node->right!=NULL){
            st.push(node->right);

        }
        if( node->left!=NULL){
            st.push(node->left); 

        }

                 

    }
    return preorder;
        
};
int main(){
    vector<int> preorder ={1,2,3,-1,-1,4,5,-1,-1,6,-1,-1,7,-1,-1};
    TreeNode* root=buildTree(preorder);
    vector<int> ans= preorderTraversal(root);
    int n= ans.size();
    for(int i=0;i<n;i++){
        cout<<ans[i];
    }

    
    return 0;
}