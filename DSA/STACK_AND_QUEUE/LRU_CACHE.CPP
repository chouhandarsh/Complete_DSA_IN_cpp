#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
class Node{
public:
    int key;
    int val;
    Node* next;
    Node* prev;
public:
    Node(int key1, int val1){
        key=key1;
        val= val1;
        next=NULL;
        prev=NULL;
    }
};

class LRU_CACHE{
public:
    unordered_map<int,Node*> mp;
    Node* head;
    Node* tail;
    int capacity;
public:
    LRU_CACHE(int cap){
        capacity=cap;
        head = new Node(-1,-1);
        tail = new Node(-1,-1);
        head->next= tail;
        tail->prev= head;

    }
    // for deleting the Node
    void Delete(Node* delNode){
        Node* delNext= delNode->next;
        Node* delPrev= delNode->prev;
        delPrev->next = delNext;
        delNext->prev= delPrev;

    }
    void AddNode(Node* newNode){
        Node* temp= head->next;
        newNode->next=temp;
        temp->prev=newNode;
        head->next = newNode;
        newNode->prev= head;
    }
    // the get feature will give the value for that key so we will use a map which will store weather that key has been used or not if it will not be used then we will return -1 as the output other wise the pair will be the output
    int get(int key){
        if(mp.find(key)!=mp.end()){
            //resNode means the rescent NOde
            Node* resNode = mp[key];
            int rescent= resNode->val;
            // this Node will be in the fist of the Dll so we will do it
            // so we have already defined two function named delete and add Node so we will call then and do so
            Delete(resNode); // delete form the previos position and add it to the new position that is in the begning of the linklist
            AddNode(resNode);
            // after adding to the  begining we will have to update its Node position so
            mp[key]= head->next;
            return rescent;
        }
        else{
            return -1;
        }
    }
    void add(int key, int val){
        // we will if check if is not already present in the map if it is already preseny then we will update its value other wise we will check if it the capacity is not full
        if(mp.find(key)!=mp.end()){// the key is in the list then we will update its value and  make it most rescent used
            // if it is existing then we will delete it from the map this is the main step of theiss part
            Node* existingNode= mp[key];
            mp.erase(key);
            Delete(existingNode);
        }
        // if the capacity is reached at maxmum then we will delete the least rescently used
        if(mp.size()>capacity){
            Node* toDel= tail->prev;
            // erasing it from the map
            mp.erase(toDel->key);
            Delete(toDel);
        }
        // now we have delted if it  is existing  or  the capacity is full so now we will simply add it
        Node* newNode= new Node(key, val);
        AddNode(newNode);
        mp[key] = head->next;
    }
  
};

int main(){

    LRU_CACHE cache(2);   // capacity = 2

    cache.add(1,1);
    cache.add(2,2);

    cout << cache.get(1) << endl;   // returns 1

    cache.add(3,3);   // evicts key 2

    cout << cache.get(2) << endl;   // returns -1

    cache.add(4,4);   // evicts key 1

    cout << cache.get(1) << endl;   // -1
    cout << cache.get(3) << endl;   // 3
    cout << cache.get(4) << endl;   // 4
    return 0;
}