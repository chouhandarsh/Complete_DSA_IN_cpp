// we will be given a tree and we have to chnage the tree so that it will follow child sum property in which the sum of  the values of child will be equal to there parent
#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
public:
    Node(int data){
        this->data= data;
        left =NULL;
        right=NULL;


    }

};
int idx= -1;
Node* Tree_formation(vector<int> arr){
    idx++;
    Node* node= new Node(arr[idx]);
    node->left = Tree_formation(arr);
    node->right = Tree_formation(arr);
    return node;    
}
// the main problem is that when we will add two brances then it may happen that the value of child sum is less and main parent is greater then we dont have any option to decrease the value
// so while going down we will check the 10+ 20=30<40 so we will chnage the value
//5+2=7<40 so we will do the same
//30+40> 40 so we will make the root to there sum
class Solution{
    void ChangeTree(Node* root){
        int child =0;
        if(root==NULL) return ;
        if(root->left){
            child+=root->left->data;

        }
        if(root->right->data){
            child+=root->right->data;
        }
        if(child>=root->data) root->data= child;
        else{
            // in this case the value of the left and right will be same as the root
            if(root->left) root->left->data= child;
            else if(root->right) root->right->data = root->data;

        };
        ChangeTree(root->left);
        ChangeTree(root->right);
        // now we have updated the value so now when we will add so update the parent value
        int sum=0;
        if(root->left) sum+=root->left->data;
        if(root->right) sum+= root->right->data;
        // we have to keep in mid that it is not the leaf node
        if(root->left || root->right){
            root->data=sum;

        }
        

    }
};



int main(){
    return 0;
}