// Write a program to read three integers from a file.

#include <stdio.h>

int main() {
    FILE *ptr;
     int a,b,c;
    ptr = fopen("01file.txt", "r");
     fscanf(ptr, "%d %d %d", &a, &b, &c);
    printf("The integers are: %d, %d, %d", a,b,c);
    fclose(ptr);
    return 0;
}