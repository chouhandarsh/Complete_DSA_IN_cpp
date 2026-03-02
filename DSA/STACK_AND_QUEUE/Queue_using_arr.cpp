#include <bits/stdc++.h>
using namespace std;
class Queue{
public:
    int arr[5];
    int st = -1;
    int end =-1;
    int currSize=0;
public:
    void push(int val){
        if(st == -1) {
            st = 0;
            end = 0;
            arr[end] = val;
            st++;
            end++;
        }
        else{
            end++;
            arr[end]=val;
            
        }
    }
    int top(int val){
        top =
    }
    



    
};
int main(){

    return 0;
}