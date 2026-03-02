#include <bits/stdc++.h>
using namespace std;
// defining the data type of Node
class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1){
        data=data1;
        next=NULL;
    }
};
Node* Arr2LL( vector<int> arr){
    Node* head= new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;

};
void print(Node* head){

    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    
};
Node* insertbeforeVal(Node* head, int bef, int val){
    // it is given that it is not the last element so we dont need the prev other wise we would have used the prev and the curr
    // we would have pointed the prev to curr and then curr to prev->next->next
    Node* temp= head;
    // if it is the first element
    if(head->data==bef){
        // we will add to the next
        Node* curr = new Node(val);
        curr->next = head;
        head=curr;
        return head;      
    }
    while(temp->next!=NULL){
        if(temp->next->data == bef){
            Node* curr = new Node(temp->next->data);
            curr-> next =temp->next->next;
            temp->next->data = val;
            temp->next->next =curr;
            return head;
        }
        temp=temp->next;
    


    }
    
    
}




int main  (){
    vector<int> arr= {1,2,3,4,5};
    Node* head = Arr2LL(arr);
    head = insertbeforeVal(head,4,10);
    print(head);
    return 0;
}