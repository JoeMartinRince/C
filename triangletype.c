#include <stdio.h>

int main() {
    int side1, side2, side3;

    printf("Enter the first side: ");
    scanf("%d", &side1);
    printf("Enter the second side: ");
    scanf("%d", &side2);
    printf("Enter the third side: ");
    scanf("%d", &side3);

    if (side1 == side2 && side2 == side3) {
        printf("It is an equilateral triangle\n");
    } 
    else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("It is an isosceles triangle\n");
    } 
    else {
        printf("It is a scalene triangle\n");
    }

    return 0;
}
