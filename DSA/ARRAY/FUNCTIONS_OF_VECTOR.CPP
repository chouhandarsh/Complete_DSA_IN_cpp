// VECTOR FUNCTION IT'S SIZE CAN BE RESIZED BECAUSE THE MEMORY IS ALLOCATED DURING THE TIME OF EXICUTION 
// UNLIKE ARRAY WHEN MEMORY IS ALLOCATED DURING EXICUTION TIME 
// STATIC MEMORY ALLOCATION IS DONE AT COMPILE TIME AND THIS MEMORY ALLOCATION IS DONE IN STACK
// DYNAMIC MEMEORY ALLOCATION --> IT IS ALLOCATD DURING RUNTIME AND MEMORY IS ALLOCATED IN HEAP FORMAT
# include <iostream>
# include <vector>
using namespace std;
int main(){
    vector<int> sec;
    vector<int> vec={1,2,3};
    vector<char> dec={'a','b','c','d'};
    cout<<"Size is "<<vec.size()<<endl;//size
    // to add element to empty vector from end
    cout<<"The size is "<<sec.size()<<endl;
    sec.push_back(24);
    sec.push_back(3);
    sec.push_back(4);
    sec.pop_back();
    cout<<"Size afterpush back is "<<sec.size()<<endl;
    for(int val: sec){
        cout<<val<<endl;
    }
    // FRONT USED TO PRINT THE FRONT VALUE IN THE VECTOR
    cout<<sec.front()<<endl;
    cout<<sec.back()<<endl;
    // AT IS USED TO ACCESS THE VECTOR AT PARTICULAR INDEX 
    cout<<sec.at(1)<<" Is the value at the end"<<endl;
    
    return 0;
}
