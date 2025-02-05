#include <stdio.h>
int main(){

int i,n,larg,small;
printf("\n Enter the no of elements: ");
scanf("%d",&n);
int num[n];
printf("\n Enter the  elements:");
for (i=0;i<n;i++){
 scanf("%d",&num[i]);
}
larg=num[0];
small=num[0];
for (i=0;i<n;i++){
 if (larg<num[i]){
  larg=num[i];
 }
 if (small>num[i]){
  small=num[i];
 }
}
printf("\n The largest is %d",larg);
printf("\n The smallest is %d",small);

return 0;
}
 
