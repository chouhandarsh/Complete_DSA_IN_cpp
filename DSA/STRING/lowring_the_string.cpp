#include <iostream>
using namespace std;
char toLowerCase(char ch){
    if(ch>='a' && ch<='z'){
        cout<<ch<<endl;
        

    }
    else{
        cout<<(char) (ch +'a'-'A')<<endl;
    }

}


int main() {
    toLowerCase('D');
    
    
    
    return 0;
}