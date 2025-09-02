// Write a program using function to find average of three numbers.

#include <stdio.h>

float avarage(int, int, int);

float avarage(int a, int b, int c){
    return (a+b+c)/3.0;
}
int main() {
    int a,b,c;
    printf("Enter three number: ");
    scanf("%d%d%d", &a,&b,&c);
    printf("Avarage of %d, %d, %d is: %f",a,b,c,avarage(a,b,c));    
        return 0;
}