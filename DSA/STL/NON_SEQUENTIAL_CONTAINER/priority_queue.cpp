//highest priority will be the elemnt with the largest value and so on 
// we only need to include queue in thhsi case and we will get acces to the proirity queue 

#include <iostream>
#include <queue>
using namespace std;

int main() {
   
    
    priority_queue<int> q;
     // if we want that the data is in the reversed order then the format is 
    priority_queue<int,vector<int>,greater<int>>p;
    q.push(1);
    q.push(5) ;
    q.push(11);
    while(!q.empty()){
        cout<<q.top()<<' ';
        q.pop();
    }

   
    
    return 0;
}