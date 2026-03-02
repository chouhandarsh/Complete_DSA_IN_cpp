#include <iostream>
using namespace std;
int main( ){
int evesum = 0;
int n ;
cout<<"Enter the number";
cin>>n;
for(int i=1; i<=n; i++)
if (i%2==0){
evesum = evesum+i;
}
cout << "The sum of numbers till "<<n<<"is"<<evesum<<endl;


return 0;
}