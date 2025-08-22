/* Write a C program to calculate area of a rectangle:
a. Using hard coded inputs.
b. Using inputs supplied by the user */

#include<stdio.h>

int main(){
    int length;
    int breath;
    printf("Enter Length of the rectangle :");
    scanf("%d",&length);
    printf("Enter Breath of the rectangle :");
    scanf("%d",&breath);
    printf("The erea of this rectangle is %d", length*breath);

return 0;
}
