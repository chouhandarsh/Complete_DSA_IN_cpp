//we will change the pointr of the head from the first element to the other element that is the second element of the l
#include<bits/stdc++.h>
using namespace std;
//defining the  type of data in node
class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
Node* convertArr2LL(vector<int> arr){
    if(arr.empty()) return nullptr;
    Node* head =  new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover-> next = temp;
        mover = temp;
       
    }
    return head;
};
    void print(Node* head){
        while(head!=nullptr){
            cout<<head-> data<<" ";
            head=head->next;
        }
    }
    Node* removes_head(Node* head ){
        if(head == nullptr){
            return nullptr;
        }
        Node* temp= head;
        head = head-> next;
        delete temp;
        return head;
         

    }

int main(){
    vector<int> arr= {1,23,3,4,5};
    Node* head = convertArr2LL(arr);
    head = removes_head(head);
    print(head);
    return  0;
}
