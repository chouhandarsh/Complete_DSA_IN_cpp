#include <iostream>
#include <vector>
using namespace std;
// we use iteratos to apply loops in the vactor
// so we will create the vector from scratch
int main() {
    vector<int> vec={1,2,3,4,5};
    cout<<*(vec.begin())<<endl;//it is a like a pointer 
    cout<<*(vec.end())<<endl; // we will not get the last elemet of the array insteed we will get a random garbage value

    
    return 0;
}