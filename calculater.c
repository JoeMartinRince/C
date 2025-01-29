#include<stdio.h>
int main(){

  int num1,num2,sum=0,difference=0,product=0,modulus=0,division=0;
  printf("Enter number 1: ");
  scanf("%d",&num1);
  printf("Enter number 2: ");
  scanf("%d",&num2);
  char choice ;
  printf("Enter a choice ");
  scanf(" %c", &choice);
  switch(choice){
    case '+' :
      sum = num1 + num2 ;
      printf("%d is the sum " , sum);
      break;
  
    case '-' :
      difference = num1 - num2 ;
      printf("%d is the difference " , difference);
     break;
  
    case '/':
     division = num1/num2;
     printf("%d is the result after division " , division);
     break;
  
    case '*' :
     product =num1*num2;
     printf("%d is the product ", product);
     break ;
    case '%' :
     modulus = num1%num2;
     printf("%d is the modulus ", modulus);
     break ;
   
   default :
    printf("Wrong input ");
    break;
 }
 return 0;
}


  
