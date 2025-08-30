/* Write a program to print the address of a variable. Use this address to get the
value of the variable. */

#include <stdio.h>

int main() {
        int a;
        printf("The adress of variable a is %p\n", &a);
        printf("The adress of variable a is %u\n", &a);
        a=10;
        int* b= &a;
        printf("The value of a is %d\n", *b);
        return 0;
}