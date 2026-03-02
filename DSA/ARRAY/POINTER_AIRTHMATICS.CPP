#include <iostream>
using namespace std;

int main() {
    int arr []={1,2,3,4,5};
    int a= 10;
    int *ptr=&a;
    cout<<ptr<<endl;//0x61fef4
    ptr++;
    cout<<ptr<<endl;  //0x61fef8bi
    // now the memory of the earlier ptr will be increased by 4 bytes as 1 number requires 4 bit of memory space
    // if we will add something into ptr like if we will add 4 then it will increase by 16 as 4 numbers requires space of 16 bytes
    ptr = ptr+2;
    cout<<ptr<<endl;
    // so if we will do arr+1 then we will be able to acces the second element of the array 
    // addition of two pointers in not allowed in cpp but we can substract the value of two pointers 
    int* ptr2; //100
    int* ptr1 = ptr2+2;
    cout<<ptr1-ptr2<<endl; // 2 
    cout<<ptr1<<endl;
    cout<<ptr2<<endl;
    cout<<(ptr1<ptr2)<<endl;

    
    return 0;
}