//Write a program to calculate the factorial of a given number using a for loop.

#include <stdio.h>

int main() {
        int n,fact=1;
        printf("Enter a number: ");
        scanf("%d", &n);
        for(int i=1; i<=n; i++){
            fact=fact*i;
        }
        printf("The factorial of the number is: %d",fact);
        return 0;
}