// VECTOR IS A STL CONTAINER WHICH IS USE TO STORE SOME DATA
//SIZE OF VECTORS CAN BE INCREASED
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec={1,2,3};
    vector<char> dec={'a','b','c','d'};

  // vector<int> vec(5,0) this means that our vector have 5 element and each has values which is equals to zero
    for(int i : vec){  // this is called for each loop. in which the index is not iterated insteed thee in the vector is iterated
        cout<< i <<" " ;
    }
    cout<<endl;

    for(char j : dec){
        cout<<j<<" ";
    }


    return 0;
}