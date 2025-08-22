/* Write a program to convert Celsius (Centigrade degrees temperature to
Fahrenheit). */

#include <stdio.h>

int main() {
        float c;
        printf("Enter temperature in Celcius: ");
        scanf("%f", &c);
        printf("%.1f degree celcius is equal to %.1f Fahrenheit",c, 9.0/5.0*c+32.0);
return 0;
}