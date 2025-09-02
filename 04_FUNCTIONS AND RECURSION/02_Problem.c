// Write a function to convert Celsius temperature into Fahrenheit.

#include <stdio.h>

float c2f(int);

float c2f(int a){
    return a*(9.0/5.0)+32.0;
}

int main() {
    int b;
    printf("Enter the temp in celcius: ");
    scanf("%d", &b);
    printf("Temp in fehrenheit is: %f", c2f(b));
        return 0;
}