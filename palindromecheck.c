#include<stdio.h>

int main() {
    int num, originalNum, rev = 0, rem;

    printf("Enter your number: ");
    scanf("%d", &num);

    originalNum = num;
    
    while (num != 0) {
        rem = num % 10;                  
	rev = rev * 10 + rem;    
        num = num / 10;              
   }
    
    if (originalNum == rev) {
        printf("It is a palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }

    return 0;
}
