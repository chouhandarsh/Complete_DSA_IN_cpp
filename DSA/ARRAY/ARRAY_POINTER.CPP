//IN CPP WHEN WE CREATE AN ARRAY THEN THE NAME OF ARRAY IS A POINTER WHICH ALWAYS  POINTS TOWARDS THE ZEROTH INDEX OF THE ARRAY
// THIS POINTER IS OF THE SPECIAL CATAGORY WHICH CANNOT BE CHANGED THIS TYPE OF POINTER IS CALLED CONATANT POINTER

# include <iostream>
# include <vector>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    cout<<arr<<endl;  //0x61fefc we will grt the location where the first element of the array is stored
    cout<<*arr<<endl;  // we will get the value which is stored at the firstindex of the arr
    int a =15,b=10;
    int *ptr = &a;
    ptr = &b;
  //arr=&a; we will get the error that pointer must be a modifyable value as it is a constant pointer so its value cannot change:
    // we can change the value of the pointer in this case but if it is a constant pointer then we cannot change the value of costant pointer





    return 0;
}
