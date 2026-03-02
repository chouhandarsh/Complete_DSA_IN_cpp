#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> vec = {1,2,3,4,5,6};
    vector<int> :: iterator itr;
    for(itr = vec.begin();itr!=vec.end();itr++){
        cout<<*(itr);
        cout<<endl;
        // here iterator is also doing the same work which for each loop does but with the help of iterator we are able to get the direct address of the memory location
        
    }



    
    return 0;
}