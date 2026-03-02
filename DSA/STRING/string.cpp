#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "IIIT Dharwad";
    cout<<str<<endl;
    str = "IIT Dharwad";
    cout<<str<<endl;
    // string are dynamic in nature we can change their valueduring the time of execution
    char chArr[]="IIT";
    // chArr = "IIIT"; we will get the error that it must be modifiable 
    string str1 ="IIIT";
    string str2 = "Dharwad";
    string str3 = str1+str2;
    cout<<(str1==str2)<<endl;
    cout<<str1.length()<<endl;
    cout<<str3<<endl;
    return 0;
}