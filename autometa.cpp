#include<iostream>
using namespace std;
int main (){
    int n = 5;
    int matrix[100][100] = {0};
   
    int state = 0;
    int row = 0;
    int col = 0;   
   
    int k = 0; // How many cells we have filled till now ?
    while( k < n*n ){
        matrix[row][col] = k+1;    
        if(state==0){
            if(col==n-1 || matrix[row][col+1] !=0 ){
                state=1;
                row++;
            }else{
                col++;             
            }              
        }else if(state==1 ){
            if( row==n-1 || matrix[row+1][col] !=0 ){
                state=2;
                col--;
            }else{
                row++;             
            }                  
        }else if(state==2 ){
            if(col==0 || matrix[row][col-1] !=0 ){
                state = 3;
                row--;
            }else{
                col--;     
            }              
        }else if(state==3){
            // already filled !
            if( row==0 || matrix[row-1][col] != 0 ){
                state = 0;
                col++;
            }else{
                row--; 
            }  
        }
       
        k++;
    }
   
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            cout<< matrix[i][j]<<" ";
        }  
        cout<<endl;
    }
   
    return 0;
}