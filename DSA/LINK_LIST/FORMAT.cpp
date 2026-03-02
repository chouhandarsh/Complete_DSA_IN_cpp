#include <bits/stdc++.h>
using namespace std;
// LINK LIST IN NOT IN CONTIGIOUS MEMORY LOCATION
// it is used in stack in  queue
// in real life it is  used in browser
// scince we are storing two things first  the  number and its address so the data type of address is not defined
// so we are  using a self defined class  Start open this up and then you say. No. 



// this is the class for all the nodes and we will have to reate a seperate class
// which will store the linked class
// for using linked list we will use linked class
// HEAD is the special node pointer which stores the address of the first poineter
// TAIL is the other special pointer which stores the address of the last NODE

// ---------IMPORTANT FUNCTIONS-------------
// push_front()
// push_back()
//pop_front
// pop_back()
struct Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
};
// in cpp all the classes which are not decleared as public or protected  will be considered as private and cannot be acceses outside the defined class

int main() {
    // in this method we will have to insert the null pointer all the time so the better approach will be to use  the  other fomat
    vector<int> arr = {2,5,8,7};
    Node*y = new Node(arr[0], nullptr);
    Node z =  Node(arr[0], nullptr);
    //cout<<y<<endl; we will get an error as there is two things stored in so we will get an error
    cout<<z.data<<endl;
    cout<<z.next<<endl;
    cout<<y<<endl;
    
    
    return 0;
}