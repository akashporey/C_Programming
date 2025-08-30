/* Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to
a function and print its address. Are these addresses same? Why? */

#include <stdio.h>

int adress(int*);

int adress(int* v){
    printf("The adress of i is %u\n", v);
    

}
int main() {
        int i;
        int* j= &i;
        printf("The adress of variable i is %u\n", &i);
        printf("The value of j is %d\n", j);
        adress(j);
        return 0;
}