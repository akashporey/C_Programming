/* Write a function ‘sumVector’ which returns the sum of two vectors 
   passed to it. The vectors must be two–dimensional.
*/

#include <stdio.h>

typedef struct vector
{
    int i;
    int j;
}v;

v sumVector(v v1, v v2){
    v v3={v1.i + v2.i, v1.j + v2.j};
    return v3; 
}

int main() {
    v v1={1,2};
    v v2={3,4};
    v v3= sumVector(v1,v2);
    printf("Sum of two vectors: %di + %dj", v3.i, v3.j);
    return 0;
}