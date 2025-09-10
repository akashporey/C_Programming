// Create a two-dimensional vector using structures in C.


#include <stdio.h>

struct vector
{
    int i;
    int j;
};

int main() {
    struct vector v={1,2};

    printf("The values of 2D vector is %di + %dj", v.i, v.j);
    return 0;
}