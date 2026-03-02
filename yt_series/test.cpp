#include <bits/stdc++.h>
using namespace std;
// defing the data type
class Node{
    public:
    int data;
    Node* next;
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
Node* arr2LL(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    //creating thr link for the other element
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        temp=temp->next;
        mover=temp;
    }
};
// printing the LL
void print(Node*head){
    Node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
};
// for the insertion of the things
Node* head_insertion(Node* head, int tar){
    Node* temp= new Node(tar);
    temp->next=head;
    // we will change the  head
    head= temp;
    return head;



};
int HCF(int a, int b){
    if(a>b){
        int c = a%b;
        if(c==0){
            return b;
        }
        return HCF(b,c);
    }
    else{
        int c = b%a;
        if(c==0){
            return a;

        }
        return HCF(a,c);
        

    }
}
int main(){
    int x=HCF(12,6);
    cout<<x<<endl;
    

    return 0;
}