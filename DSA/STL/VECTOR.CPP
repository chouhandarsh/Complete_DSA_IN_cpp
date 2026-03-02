#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(2);
    cout<<vec.capacity()<<endl;
    for (int val :vec){
        cout<<val;
        cout<<endl;
    }
    
    vec.pop_back();// this will delete the last data in the vector 
    cout<<vec.front()<<vec.back()<<endl;// we will get the start and the end of that vector 
    vector <int>det(3,10);// first is size and lasrt one is value
    //erase is use
    vec.erase(vec.begin());
    vec.erase(vec.begin()+1);
    vec.erase(vec.begin(),vec.begin()+3);// last one is not included
    vec.insert(vec.begin()+2,100);
    vec.clear();//it will becme empty its size will be zero but its capacity will be remain same
    cout<<vec.empty()<<endl; // boolinan data type return true if the vector is empty
    





    return 0;
}