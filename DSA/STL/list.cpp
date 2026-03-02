#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {
    list <int>l;
    l.push_back(1);
    l.push_back(2);
    l.push_front(4);
    l.push_front(6);
    l.pop_front();
    l.pop_back();

    for (int val : l){
        cout<<val<<' ';
    }
    cout<<endl;
    
    return 0;
}