// WHEN EVER WE ADD SOMETHING TO AN VECTOR, FIRST IT TRIES TO STORE THAT INTO THE SAME ARRAY, BUT IF THERE IS NO SPACE, THEN THE VECTOR GETS DOUBBLED AND STORES THE ENTERED DATA, 
// BUT IF WE ENTERED ONLY ONE THING AND OTHER BOX REMAINDED EMPTY
// WHEN USER ENTER SOMETHING IN THAT CASE THAT WILL BE STORED AT THAT EMPTY PLACE
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);

    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;


return 0;
}