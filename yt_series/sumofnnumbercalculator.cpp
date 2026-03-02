#include <iostream>
using namespace std;
int main ()
{
    int n;
    int sum=0;
    cout << "enter n";
    cin>>n;
    for (int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout << "sum of  "<<n<<"is"<<sum <<endl;




    return 0;

}