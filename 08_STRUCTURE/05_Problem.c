/* Create an array of 5 complex numbers created in Problem 5 and display them
   with the help of a display function. The values must be taken as an input from
   the user.
*/
#include <stdio.h>

typedef struct Complex
{
    int real;
    int imaginary;
}com;

void display(com c){
    printf("The values of complex number is %d + %d i", c.real, c.imaginary);
}

int main() {
    com c[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter real part: ");
        scanf("%d", &c[i].real);
        printf("Enter imaginary part: ");
        scanf("%d", &c[i].imaginary);
        
        display(c[i]);
        printf("\n");
    }

    return 0;
}