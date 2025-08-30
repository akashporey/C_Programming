/* Write a program using a function which calculates the sum and average of two
numbers. Use pointers and print the values of sum and average in main(). */

#include <stdio.h>

int sum(int*, int*);
float average(int*,int*);

int sum(int* a, int* b){
        return *a+*b;
}

float average(int*c, int*d){
        return (*c+*d)/2.0;
}

int main() {
        int x=5;
        int y=10;
        int S=sum(&x,&y);
        printf("Sum of two number is %d\n", S);
        float A=average(&x,&y);
        printf("Average of two number is %.2f\n", A );
        return 0;
}