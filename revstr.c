/*Author : Joe Martin Rince
Date:19-2-2025
Program :To reverse a string without using built-in fuctions.
*/
#include <stdio.h>
int main(){
int length;
 char str1[]="SJCET";
 for (length=0;str1[length]!='\0';length++);
 int i = length-1;
  for (int j=0;j<length/2;j++){
   char temp =str1[i];
   str1[i]=str1[j];
   str1[j]=temp;
   i--;
  }
printf("\n The reverse of the string is :");
puts(str1);
return 0;
}

