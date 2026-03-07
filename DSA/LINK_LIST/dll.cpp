#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node* prev;
    public:
    Node(int data1){
        data=data1;
        next=NULL;
        prev=NULL;
    }
};
Node* Arr2LL(vector<int>arr){
    Node* head= new Node(arr[0]);
    Node* mover = head;
    for(int i =1;i<arr.size();i++){
        Node* curr= new Node(arr[i]);
        mover->next= curr;
        curr->prev=mover;
        mover=curr;
    }
    return head;
    
}
void print(Node* head){
    Node* temp = head;
    cout<<"NULL";
    while(temp!=NULL){
        cout<<"<->"<<temp->data;
        temp=temp->next;

    }
    cout<<"<->NULL"<<endl;
}
Node* insertNode(int val, Node* head){
    Node*  newHead= new Node(val);
    newHead->next =head;
    head->prev=newHead;
    return newHead;
}
Node* deleteHead(Node* head){
    Node* newHead= head->next;
    newHead->prev=NULL;
    head->next=NULL;
    delete(head);
    return newHead;
}
Node* reverse(Node* head){
    // the correct method to do so is to change the previous to next and next to previous
    if(head==NULL|| head->next==NULL){
        return head;
    }
    Node* temp =NULL;
    Node* curr= head;
    while(curr!=NULL){
        temp= curr->prev;
        curr->prev=curr->next;
        curr->next= temp;
        // since we have changed the links so we will have to go to previous
        curr= curr->prev;
    }
    // now the head is changed
    // so the new head is temp ka  perv 
    head= temp->prev;
    return head;
    

}
int main(){
    vector<int> arr={1,2,3,4,5,6};
    Node* head= Arr2LL(arr);
    print(head);
    Node* newHead=insertNode(0,head);
    print(newHead);
    Node* delHead=  deleteHead(newHead);
    print(delHead);
    Node* rev=reverse(delHead);
    print(rev);

    return 0;
}