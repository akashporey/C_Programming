/* Write a program with a structure representing a complex number.
*/

#include <stdio.h>

typedef struct Complex
{
    int real;
    int imaginary;
}com;

int main() {
    com c={10, 12};

    printf("The values of complex number is %d + %d i", c.real, c.imaginary);
    return 0;
}