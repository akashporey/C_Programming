/* Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points
to the third element where ptr is a pointer pointing to the first element of the
array.  */

#include <stdio.h>

int main()
{
    int num[] = {10, 12, 14, 18, 19, 25, 30, 50, 65, 70};
    int* ptr = &num[0];
    printf("The value at adress %u is %d\n",ptr, *ptr);
    
    printf("The value at adress %u is %d\n",ptr+3, *(ptr+3) );
    return 0;
}

