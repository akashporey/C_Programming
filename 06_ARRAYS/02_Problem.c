/* If S[3] is a 1-D array of integers then *(S+3) refers to the third element:
(i) True.
(ii) False.
(iii) Depends.*/

#include <stdio.h>

int main() {
    int s[3]={2,3,4};
    printf("%d",*(s+3)); // Ans is False because it indicate the fourth element of the array.
    return 0;
}