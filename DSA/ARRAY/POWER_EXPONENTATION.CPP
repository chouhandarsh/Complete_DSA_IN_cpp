#include <iostream>
using namespace std;
int main(){
    int n = 2,m=20,l=1;
    while(n>1){
        if (m%2==0){
            m=m/2;
            n=n*n;
    
        }
        else{
            l=l*n;
            n=n-1;
        }
    }
cout<<l<<endl;


}
