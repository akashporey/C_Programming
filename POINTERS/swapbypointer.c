#include <stdio.h>

void swap(int*, int*);

void swap(int* a, int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main() {
        int a=6, b=8;
        swap(&a,&b);
        printf("The value of a is %d\nThe value of b is %d", a,b);
        return 0;
}