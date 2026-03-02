#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(3);
    cout<<*(s.lower_bound(2))<<endl;
    // it will give us the iteratoe with the lower bound 2 means if it is present else the value just greater than 2
    // if it not present we will get s.end() and if we will dereference it we will get 0 as the answer
    for(auto val:s){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}