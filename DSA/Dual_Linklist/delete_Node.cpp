#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    public:
    Node(int data1, Node* prev1, Node* next1){
        data=data1;
        prev= prev1;
        next=next1;
    }
};
Node* Arr2LL(vector<int> arr){
    Node* head= new Node(arr[0],NULL,NULL);
    Node* prev = head;
    for(int i =1;i<arr.size();i++){
        Node* temp= new Node(arr[i],prev,NULL);
        prev->next = temp;
        prev= temp;
    }
    return head;
}
void Deleting_Node(Node* temp){
    Node* back = temp->prev;
    Node* front = temp->next;
    if(front==NULL){
        // it is the last element of the LL
        back->next=NULL;
        back->prev=NULL;
        delete(temp);
        return;
    }
    else{
        back->next=front;
        front->prev= back;
        //breaking the link 
        temp->prev=NULL;
        temp->prev=NULL;
        return;

    }
}
void print(Node* head){
    Node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8};
    Node* head=Arr2LL(arr);
    Deleting_Node(head->next);
    print(head);

    return 0;
}