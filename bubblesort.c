#include <stdio.h>
int main(){

int i,n,j;
printf("\n Enter the no of elements: ");
scanf("%d",&n);
int num[n];
printf("\n Enter the  elements:");
for (i=0;i<n;i++){
 scanf("%d",&num[i]);
}
for (i=0;i<n;i++){
 for (j=0;j<n-i;j++){
  if (num[j]>num[j+1]){
    int temp;
     temp=num[j];
     num[j]=num[j+1];
     num[j+1]=temp;
  }
 }
}
for (i=0;i<n;i++){
printf("%d\t",num[i]);
}
return 0;
}
