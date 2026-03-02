// MEMORY ADDRESS
# include <iostream>
using namespace std;
int main(){
    /*int a = 10;
    cout<<&a<<endl;
    // this will print the location in the memory where this is stored
    // 0x61ff0c this is the location in the memoey where that is stored





    */
    // Pointer is a special variable that stores address of other variable
    int a =10;
    int* prt=&a;// for letting the computer know that we are storing the location so we will use pointer in this
    float b = 100.11;
    float* ptr2=&b;
    float** ptr3=&ptr2; // this is storing the address of the pointer so we have added two star into it
    
    cout<<prt<<" "<<ptr2<<" "<<ptr3<<endl;
    // * is a dereference oprator which gives the value at that address
     cout<<*(&a)<<endl;
     // it will give the value which is stored
     cout<<*(prt)<<endl;// if we are writing ptr then we are talking about the value stored at ptr not the location of ptr
     //the size of pointer is always 8 bits
     //  NULL POINTER
     int *ptr=NULL;
        

    return 0;
}