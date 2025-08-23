//Write a program to find whether a year entered by the user is a leap year or not.

#include <stdio.h>

int main() {
        int year;
        printf("Enter a Year: ");
        scanf("%d", &year);
        if(year%4==0 && year%100!=0 || year%400==0)
            printf("This year is leap year");
        else
            printf("This is not a leap year");
        return 0;
}