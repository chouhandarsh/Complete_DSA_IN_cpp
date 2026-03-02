#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
string binary(int nums){
    string bina="";
    while(nums>0){
        int a = nums%2;
        string b = to_string(a);
        bina = b+bina;
        
        nums = nums/2;
        
    }
    return bina;

}

int main() {
    cout<<binary(10)<<endl;
    
    
    return 0;
}