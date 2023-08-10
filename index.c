// write a c program to do calculator operations add sub mul div
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the value of a and b\n");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("Addition of %d and %d is %d\n", a, b, c);
    c = a - b;
    printf("Subtraction of %d and %d is %d\n", a, b, c);
    c = a * b;
    printf("Multiplication of %d and %d is %d\n", a, b, c);
    c = a / b;
    printf("Division of %d and %d is %d\n", a, b, c);
    return 0;
}