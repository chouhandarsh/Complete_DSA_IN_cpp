#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data1){
        data= data1;
        next = NULL;
    }
};

class stack{
private:
    // the last element is going to be the head of the linklist
    Node* top;
public:
    stack(){
        top = NULL;
    }
    bool isEmpty(){
        if(top==nullptr){
            return true;
        }
        else{
            return false;
        }
    };
    void push(int x){
        Node* newNode = new Node(x);
        newNode->next=top;
        top = newNode;
    }


    
    void pop(){
        if(isEmpty()){
            cout << "Stack underflow" << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }
    int peak(){
        if(isEmpty()){
            cout<<"stack is empty";
            return -1;
        }
        return top->data;
    }
};
int main(){
    return 0;
}