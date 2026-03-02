/*# include <iostream>
# include <vector>
# include <set>
using namespace std;
int main(){
    vector<int>vec={1,1,2,1,1};
    int n = 5;
    for(int i= 0; i< vec.size();i++){
        int count =0;
        for(int el:vec){
            if (el ==vec[i])
            count++;
        }
        if (count>n/2){
            cout<<vec[i]<<" is a memory element"<<endl;
            break;
        }

    }

    


    return 0;
}*/
// This is not the most optimized solution as the time compleity is o(n2) so we will short the array then we will aplly shorting so the time complexity will be O(nlogn)
// we will sort the list then we will do other thing
# include <iostream>
using namespace std;
int main(){
    return 0;
}