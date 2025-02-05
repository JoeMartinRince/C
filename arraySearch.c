#include <stdio.h>
int main(){

int i,n;
printf("\n Enter the no of elements: ");
scanf("%d",&n);
int num[n];
printf("\n Enter the  elements:");
for (i=0;i<n;i++){
 scanf("%d",&num[i]);
}
int number;
printf("\n Enter the no to be searched: ");
scanf("%d",&number);
for (i=0;i<n;i++){
 if (num[i]==number){
  printf("\n The number %d is at %d",number,i+1);
  
 }


 if (num[i]==!number){
  printf("\n The number %d is not found",number);

 }

 
}
return 0;
}
