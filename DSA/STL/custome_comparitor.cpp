#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compararator(pair<int,int>p1, pair<int,int>p2){
    if(p1.second<p2.second) return true;
    else{
        return false;
    }


}

int main() {
    vector<pair<int,int>> vec ={{3,1},{2,1},{7,1},{5,2}};
    sort(vec.begin(),vec.end(),compararator);
    for(const pair<int,int>& n : vec){
        cout << n.first << " " << n.second << endl;
    }


    
    return 0;
}