#include <iostream>
using namespace std;
void reverseString(char name[],int n){
    int st =0;
    int end = n-1;
    while(st<end){
        swap(name[st++],name[end--]);

    }
}
int getlength(char name[]){
    int count = 0;
    for (int i = 0; name[i]!='\0';i++){
        count++;
    }
    return count;

}


int main() {
    char name[20];
    cout<<"Enter Your name ";
    cin>> name;
    int len = getlength(name);
    reverseString(name,len);
    cout<<"Your name is ";
    cout<<name<<endl;
    cout<<"Length "<<getlength(name)<<endl;
     
    
    return 0; 
}