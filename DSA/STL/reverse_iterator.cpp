#include <iostream>
#include <vector>
using namespace std;



int main() {
    vector <int> vec={1,2,3,4,5,6};
    // reverse iteator
    vector<int>::reverse_iterator itr;
    for(itr = vec.rbegin();itr!=vec.rend();itr++){
        cout<<*(itr)<<" ";
       
   
    

    }
    for(auto it = vec.rbegin(); it != vec.rend();it++){
        cout<<*(it)<<endl;
    }
    // always we don't need to define all the things it can identify by itself
    // we can use auto in this case 

    cout<<endl;
    

    
    return 0;
}