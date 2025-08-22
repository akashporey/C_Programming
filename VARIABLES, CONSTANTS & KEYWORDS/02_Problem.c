/* Calculate the area of a circle and modify the same program to calculate the
volume of a cylinder given its radius and height. */

#include <stdio.h>

int main() {
        int r,h;
        printf("Enter the radious of the circle:");
        scanf("%d",&r);
        printf("Radious of the circle is %f\n", 3.14*r*r);
        printf("Enter the radious and height of the cylinder:");
        scanf("%d%d",&r,&h);
         printf("Volume of the cylinder is %f", 3.14*r*r*h);
return 0;
}