#include <bits/stdc++.h>
using namespace std;
class CircularQueue{
    int* arr;
    int CurrSize, cap;
    int f,r;
public:
    CircularQueue(int size){
        cap=size;
        arr= new int(cap);
        f=0;
        r=-1;

    }
    void push(int num){
        if(empty()==false){
            cout<<"The array is Full"<<endl;
            return;
        }
        // we are always entering from the rare end so  we will increase the rare pointer
        r=(r+1)%cap;
        CurrSize++;
        arr[r]=num;
    }
    void pop(){
        if(empty()){
            cout<<"CQ is empty";
            return;
        }
        f=(f+1)%cap;
        CurrSize--;

    }
    int front(){
        if(empty()){
            cout<<"CQ is Empty";
            return -1;
        }
        return arr[f];

    }
    bool empty(){
        if(CurrSize==cap){
            return false;
        }
        return true;
        
    }
    void printArr(){
        for(int i=0;i<cap;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};
int main(){
    CircularQueue cq(3);
    cq.push(1);
    cq.push(2);
    cq.push(3);
    cq.push(5);
    cq.printArr();
    return 0;

}