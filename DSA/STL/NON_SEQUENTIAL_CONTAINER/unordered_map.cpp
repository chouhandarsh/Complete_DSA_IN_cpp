#include <iostream>
# include <unordered_map>
using namespace std;

int main() {
    unordered_map<string,int>m;
    m.emplace("tv",100);
    m.emplace("fridge",200);
    m.emplace("car",200);
// in ordered map data is stored in sorted order and the timecomplexity is O(logn) and whearas in unordered map the time complexity comes to be O(1) in practical cases and it comes to be O(n) in rare cases
    for(auto  p:m){
        cout<<p.first <<" "<<p.second<<endl;
    }
    return 0;
}