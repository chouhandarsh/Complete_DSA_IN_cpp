#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
Node* Arr2LL(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* temp= head;
    for(int i=1;i<arr.size();i++){
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    return head;
}
void print(Node* head){
    Node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
    }
}
Node* DNF(Node* head){
    Node* head0 = new Node(-1);
    Node  *head1 = new Node(-1);
    Node *head2 = new Node(-1);
    Node* zero = head0;
    //dummy nodes
    Node *one=head1;
    Node *two = head2;
    Node* temp=head;
    while(temp!=nullptr){
        if(temp->data==0){
            head0->next=temp;
            zero =temp;

        }
        else if(temp->data==1){
            head1->next= temp;
            one=temp;
            
        }
        else{
            head2->next=temp;
            two=temp;
        }
        temp= temp->next;

    }
    
}
int main(){



    return 0;
}