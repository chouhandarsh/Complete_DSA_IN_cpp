#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin,str);// we can take whole line as a imput otherwise as we will input the first  space input will not be taken
    cout<<"output"<<str<<endl;
    for(int i = 0; i<str.length();i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    // we can also use for each loop
    for(char ch:str){
        cout<<ch<<" ";
    }
    cout<<endl;

    
    return 0;
}