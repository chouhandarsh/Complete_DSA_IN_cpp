//this is not optimized as we know how i and j are related so we don't need to itrate though j as i==j in case of primary diagnoal and j = n-i-1 in case  of secondary diagnol
/*#include <iostream>
using namespace std;
int diagonal_sum(int mat[3][3],int n ,int m){
    int sum = 0;
    for(int i =0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(i==j){
                sum+=mat[i][j];

            }
            else if(j == n - i -1){
                sum+=mat[i][j];
                // the middle element will not be conted twice as if stAatement will be exicuted the n the else need not to be exicuted and hence it will  only be added once
            }
        }

    }
    return sum;
}
int main() {
    int matr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int rows =3;
    int cols =3;
    cout<<diagonal_sum(matr,rows,cols)<<endl;
    
    return 0;
}*/


// we will disuss its optimised method 
#include <iostream>
using namespace std;
int diagnol_sum(int mat[3][3],int n){
    int sum = 0;
    for(int i = 0;  i<n;i++){
        sum+=mat[i][i];
        if(i !=n-i-1){// we are using this condition so that the  central element is not added twice
            sum+=mat[i][n-i-1];
        }
    }
    return sum;
}

int main() {
    int matr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int n =3;
    cout<<diagnol_sum(matr,n)<<endl;
    
    return 0;
}