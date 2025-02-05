#include <stdio.h>
int main(){
 int number,fact,i;
  printf("Enter the number: " );
  scanf("%d",&number);
  fact=1;
  for (i=1;i<=number;i++){
   fact = fact*i;
  }
  printf("The factorial is %d",fact);
 return 0;
}
