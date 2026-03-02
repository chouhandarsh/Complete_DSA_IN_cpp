#include <iostream>
using namespace std;
int main(){
int number;
cout<< "Enter the number";
cin >>number;
int oddsum= 0;
for (int i = 1;i<=number; i++)
if (i %2!=0) {

    oddsum =oddsum+i;
}


cout<<oddsum<<endl;







    return 0;
}

