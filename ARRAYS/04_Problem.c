/* Write a program to create an array of 10 integers and store multiplication table
 by the user using scanf. 
*/

#include <stdio.h>

int main() {
    int multi_table[10];
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 0; i < 10; i++)
    {
        multi_table[i]=n*(i+1);
        printf("%d X %d = %d\n", n, i+1, multi_table[i]);
    }
    
     printf("Elements of array are: ");
    for (int j = 0; j < 10; j++)
    {
       
        printf(" %d ", multi_table[j]);
    }
    
    
    return 0;
}