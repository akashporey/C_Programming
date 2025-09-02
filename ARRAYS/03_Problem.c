/* Write a program to create an array of 10 integers and store multiplication table of
5 in it. */

#include <stdio.h>

int main() {
    int multi_table[10];
    for (int i = 0; i < 10; i++)
    {
        multi_table[i]=5*(i+1);
        printf("5 X %d = %d\n", i+1, multi_table[i]);
    }
    
     printf("Elements of array are: {");
    for (int j = 0; j < 10; j++)
    {
       
        printf(" %d ", multi_table[j]);
    }
    printf("}");
    
    return 0;
}