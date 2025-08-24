//. Write a program to sum first ten natural numbers using while loop.

#include <stdio.h>

int main() {
        int n=0,i=0;
        while (i<=10)
        {
            n=n+i;
            i++;
        }
        printf("Sum of first ten natural numbers is: %d ", n);
        return 0;
}