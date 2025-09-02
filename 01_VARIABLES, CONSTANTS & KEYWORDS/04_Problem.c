/* Write a program to calculate simple interest for a set of values representing
principal, number of years and rate of interest. */

#include <stdio.h>

int main() {
        float p;
        int r,t ;
        printf("Enter the principle amount: ");
        scanf("%f", &p);
        printf("Enter the annual interest rate: ");
        scanf("%d", &r);
        printf("Enter the number of year: ");
        scanf("%d", &t);
        printf("Simple interest is %.2f", (p*r*t)/100);
        return 0;
}