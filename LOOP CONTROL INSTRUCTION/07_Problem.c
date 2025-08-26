//Write a program to calculate the factorial of a given number using a while loop.

#include <stdio.h>

int main() {
        int n,i=1,fact=1;
        printf("Enter a number: ");
        scanf("%d", &n);
        while(i<=n){
            fact*=i;
            i++;
        }
        printf("The factorial of the number is: %d", fact);
        return 0;
}