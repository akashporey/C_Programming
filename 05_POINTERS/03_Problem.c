// Write a program to change the value of a variable to ten times of its current value.

#include <stdio.h>

int ten_times(int*);

int ten_times(int* n){
    *n = *n * 10;
}
int main() {
        int a=10;
        printf("The value of a is: %d\n", a);
        ten_times(&a);
        printf("The value of ten times of a is: %d\n", a);
        return 0;
}