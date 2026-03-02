#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data1){
        data=data1;
        next=NULL;
    }
};
class Queue{
    Node* head;
    Node* tail;
public:
    Queue(){
       
        head=tail=NULL;
    }
    void push(int data){
        Node* newNode=new Node(data);
        if(empty()){
            head=tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;

        }

    }
    void pop(){
        if(empty()){
            cout<<"The Link Llist is Empty"<<endl;
            return;
            
        }
        else{
            Node* temp = head;
            head=head->next;
            temp->next=nullptr;
            delete(temp);
        }

    }
    int front(){
        if(empty()){
            cout<<"LL is empty"<<endl;
            return -1;
        }
        return head->data;
        

    }
    bool empty(){
        if(head==NULL){
            return true;
        }
        else{
            return false;
        }

    }
};
int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<< endl;

    return 0;
}