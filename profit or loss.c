#include<stdio.h>
int main(){
 int costPrice,sellPrice,p;
 printf("Enter the cost price:");
 scanf("%d",&costPrice);
 printf("Enter the sell price:");
 scanf("%d",&sellPrice);
 p=sellPrice-costPrice;
 if (p>=0){
 printf("The profit is %d " ,p);
 }
 else{
  printf("The loss is %d " ,p);
 }
 return 0;
 }
 
