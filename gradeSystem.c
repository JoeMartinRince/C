#include <stdio.h>

int main() {
    char grade;

    printf("Enter the grade: ");
    scanf("%c", &grade);
    switch(grade){
     case 'E':
      printf("EXCELLENT");
      break;
     case 'V':
            printf("VERY GOOD");
            break;
     case 'G':
            printf("GOOD");
            break;
     case 'A':
            printf("AVERAGE");
            break;
     case 'F':
            printf("FAIL");
            break;
     default:
      printf("Wrong Input");
     }
return 0;
