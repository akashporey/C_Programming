//Write a program to print multiplication table in reversed order.
#include <stdio.h>

int main() {
        int n;
        printf("Enter the number: ");
        scanf("%d", &n);
        for(int i=10; i>0; i--){
            printf("%d * %d = %d\n", n,i, n*i);
        }
    return 0;
}