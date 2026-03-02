#include <iostream>
#include <utility>
using namespace std;
pair<int,int>linearSearch(int mat[4][3],int rows, int cols, int keys){
    for(int i = 0; i<rows;i++){
        for(int j = 0;j<cols;j++){
            if(mat[i][j]==keys){
                return {i,j};
                
                
    
                
            }
        }
    }
    return {0,0};
}

int main() {
    int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int rows =4;
    int cols =3; 
    pair<int,int>b=linearSearch(matrix,rows,cols,8);
    cout<<b.first<<" "<<b.second<<endl;
  

    return 0;
}