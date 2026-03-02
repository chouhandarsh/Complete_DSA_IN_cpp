#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string,int>m;
    
    m["tv"] = 100;
    m["laptop"]=200;
    m["keyboard"] = 300;
    m.insert({"camera",23});
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