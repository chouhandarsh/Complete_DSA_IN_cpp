#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    public:
    Node(int data1, Node* next1, Node * prev1){
        data = data1;
        prev = prev1;
        next = next1;
    }
};
Node * Arr2DLL(vector<int> arr){
    Node* head = new Node(arr[0],NULL,NULL);
    Node* prev = head;
    for(int i = 1;i<arr.size();i++){
        Node* curr = new Node(arr[i],NULL,prev);
        prev->next = curr;
        prev=curr;
    }
    return head;
};
void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
// this is not the optimal solution the optimal will be to reverse the links
/*Node* reverse(Node* head){
    stack<int> st;
    Node* temp =head;
    while(temp!=NULL){
        st.push(temp->data);
        temp = temp->next;
    }
    Node* curr = head;
    while(!st.empty()){
        curr->data = st.top();
        st.pop();
        curr = curr->next;

    }
    return head;
}*/
Node* reverse(Node* head){
    Node* back=NULL;
    Node* current= head;
    if(current==NULL || current->next == NULL){
        return head;

    }
    while(current!=NULL){
        back=current->prev;
        current->prev=current->next;
        current->next =back;
        current= current->prev;


    }

}

int main(){
    vector<int > arr = {1,2,3,4,5,6,7,8};
    Node* head=Arr2DLL(arr);
    Node* ans = reverse(head);
    print(ans);
   
    
    return 0;
}