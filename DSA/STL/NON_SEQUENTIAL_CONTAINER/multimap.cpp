#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<string,int>m;
    
    m.emplace("tv",100);
    m.emplace("tv",100);
    for (auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    // finding in the map
    if(m.find("camera")!=m.end()){
        cout<<"fount\n";
// if it is not found then the output will be the box just after the box with index -1
    }
    else{
        cout<<"Not found"<<endl;
    }



    
    return 0;
}