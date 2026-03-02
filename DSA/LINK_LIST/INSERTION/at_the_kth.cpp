#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data1){
        data = data1;
        next =nullptr;
    }
};
Node* Arr2LL(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover-> next = temp;
        mover = temp;

    }
    return head;
};
Node * insertPosition(Node* head, int el, int k){
    if(k==1){
        Node *newhead=new Node(el);
        newhead->next=head;
        return newhead;
    }
    int cnt = 1;
    Node* temp = head;
    while(temp!=NULL){
        if(cnt==k-1){
            Node* x = new Node(el);
            x->next=temp->next;
            temp->next=x;            
        }
        temp=temp->next;
        cnt++;
    }
    return head;
};
void print(Node* head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}
int main(){
    vector<int> arr= {1,2,3,4,5};
    Node* head = Arr2LL(arr);
    head = insertPosition(head,7,2);
    print(head);

    return 0;
}