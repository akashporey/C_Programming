//Write a program to sum first ten natural numbers using ‘for’ and ‘do-while’ loop.

#include <stdio.h>

int main() {
        int n1=0,i=0;
        for( i=1; i<=10; i++){     //using for loop
            n1=n1+i;
        }
        printf("Sum of first ten natural number is: %d\n", n1);

        
        int n2=0, j=1;
        do{
            n2=n2+j;        //using do-while loop
            j++;
        }while (j<=10);
         printf("Sum of first ten natural numbers is: %d\n", n2);
}