/*Write a program to calculate the sum of the numbers occurring in the
multiplication table of n. (consider n x 1 to n x 10).*/

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of numbers in the multiplication table of %d:\n", n);
    for(i = 1; i <= 10; i++) {
        sum = sum + (n * i);
        if(i < 10)
            printf("%d + ", n * i);
        else
            printf("%d = %d\n", n * i, sum);
    }

    return 0;
}
