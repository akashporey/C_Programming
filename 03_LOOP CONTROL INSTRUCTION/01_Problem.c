//Write a program to print multiplication table of a given number n.
#include <stdio.h>

int main() {
        int n;
        printf("Enter the number: ");
        scanf("%d", &n);
        for(int i=1; i<11; i++){
            printf("%d * %d = %d\n", n,i, n*i);

        }
        return 0;
}