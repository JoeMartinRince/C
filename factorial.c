#include<stdio.h>
int main(){

  int num,fact=1;
  printf("\n Enter a number : ");
  scanf("%d",&num);
  while (num>0){
  
    fact = fact * num;
    num--;
  }
  printf("\n %d",fact);
    return 0;
  }  
