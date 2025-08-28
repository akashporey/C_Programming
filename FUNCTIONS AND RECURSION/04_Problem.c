// Write a program using recursion to calculate nth element of Fibonacci series.

#include <stdio.h>

int fibonacci(int);

int fibonacci(int n){
        if (n==1||n==2)
        {
                return (n-1);
        }
        
        return fibonacci(n-1)+fibonacci(n-2);
}
int main() {
        int a;
        printf("Enter the nth element: ");
        scanf("%d", &a);
        printf("%dth elemnt of fibonacci series is: %d",a, fibonacci(a));
        return 0;
}