#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    public:
    Node(int data1, Node* prev1, Node* next1){
        data =data1;
        prev = prev1;
        next = next1;

    }

};
Node* Arr2LL(vector<int> arr){
    Node* head = new Node(arr[0],NULL,NULL);
    Node* prev = head;
    for(int i=1;i<arr.size();i++){
        Node* curr = new Node(arr[i],prev,NULL);
        prev->next = curr;
        prev=curr;
        

    }
    return head;

}
void print(Node* head){
    Node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    
}
Node* tail_delete(Node* head){
    if(head ==NULL|| head->next==NULL){
        return NULL;
    }
    Node* tail = head;
    while(tail->next!=NULL){
        tail= tail->next;

    }
    Node* back = tail->prev;
    back->next= nullptr;
    tail->prev = nullptr;
    delete tail;
    return head;

}
int main(){
    vector<int> arr={1,2,3,4,5,6,7,8};
    Node* head =Arr2LL(arr);
    Node* ans=tail_delete(head);
    print(ans);

    return 0;
}