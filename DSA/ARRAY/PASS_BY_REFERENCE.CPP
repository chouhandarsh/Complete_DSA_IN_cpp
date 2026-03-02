// WHEN WE HAVE SOME DATA AND WE HAVE TO CHANGE SOMETHING INTO THE DATA SO FOR THAT WE WILL CREATE COPY OF THAT DATA THEN IF WE WILL CHANGE THEN WE WILL BE ABLE TO CHANGE IN THE COPIED DATA NOT THE ORIGINAL DATA 
// WE WERE USING PASS BY VALUE AND USING POINTERS WE HAVE CONVERTED PASS BY VALUE TO PASS BY REFERENCE
// SO IF WE WILL USE PASS Y REFERENCE AND WE WILL PASS THE ADDRESS OF DATA INTO IT THEN IF WE WILL CALL THE LOCATION AND CHANGE THE DATA THEN T WILL CHANGE IN THE ORIGINAL MEMORY LOCATION ALSO
# include <iostream>
using namespace std;
void changeA(int*ptr){// I am a function named changeA. I do not return any calculation result (void). // However, to do my job, you MUST give me the memory address of an integer variable, not the variable itself."
    *ptr = 20;
}                  //"Go to the address written on this note, open the box you find there, and put the number 20 inside it."
int main(){
    int a = 10;
    changeA(&a);
    cout<<"Inside the main function "<<a<<endl; 
    
    return 0;
}
