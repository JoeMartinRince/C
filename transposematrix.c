/*
AUTHOR : JOE MARTIN RINCE
DATE : 7-2-2025
PROGRAM: TO FIND THE TRANSPOSE OF A MATRIX
*/
#include <stdio.h>
int main(){
 int row,col;
 printf("Enter the row and column values:\n");
 scanf("%d%d",&row,&col);
 int m[row][col];
 printf("Enter the elements:\n");
 for (int i=0;i<row;i++){
  for (int j=0;j<col;j++){
  scanf("%d",&m[i][j]);
  }
 }
 printf("The transpose matrix is :\n");
 for (int i=0;i<col;i++){
  for (int j=0;j<row;j++){
  printf("%d\t",m[j][i]);
  
  }
  printf("\n");
 } 
 return 0;
}
