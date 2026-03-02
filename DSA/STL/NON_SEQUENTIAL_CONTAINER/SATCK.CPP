// last in first output
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);


    s.pop(); // it will remove the element which is insrted at last
    // we pushed 1,2,3,4 but we got output as 4,3,2,1
    // we can interchange the values likr 
    // stack<int> s2 
    // s2.swap(s)
    while(s.empty()==false){
        cout<<s.top()<<endl;
        s.pop();

    }
    
    return 0;
}