#include <iostream>
using namespace std;

int main() {
    char name[20];
    cout<<"Enter your name"<<endl;
    cin>>name;
    cout<<"Your name is ";
    cout<<name<<endl;
    // Darsh chouhan
    // Your name is Darsh
    // we didnt got chouhan in the output
    // it cin stops when we give space or number as input
    name[3]='\0'; // this is called null character
    cout<<name<<" Is the name after writing nullcharater into it"<<endl;
    return 0;
}