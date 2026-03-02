#include <iostream>
using namespace std;
void removeString(string s, string part){
    int a = s.find(part);
   cout<<a <<endl; // it is returning the index of the first occurance of the  part in the string
   // s.erase(start,end) will ease the things from start to end
   // if the entered thng will not be present in the word the output will be greater than the length of the word hance we will be able to know that it is not ppresent in the word 
   

        

    }

int main() {
    removeString("needle","le");
    
    return 0;
}