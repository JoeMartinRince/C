/*Author : Joe Martin Rince
Date:19-2-2025
Program :To compare two strings without using built-in functions
*/
#include <stdio.h>
#include <string.h>
int main(){
char str1[10],str2[10];
printf("Enter the first string:");
scanf("%s",str1);
printf("Enter the second string:");
scanf("%s",str2);
int result = strcmp(str1,str2);
if (result==0){
 printf(" \n Both the strings are equal");
}
else if (result==1){
 printf(" \n String 1 is greater than string 2");
}
else{
 printf("\n String 2 is greater than string 1");
}

return 0;
}

