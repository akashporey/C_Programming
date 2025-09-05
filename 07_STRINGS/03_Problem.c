/* Write a function slice() to slice a string. It should change the original string such
   that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position
   for slice.
*/

#include <stdio.h>

char* slice(char NS[], int m, int n){
        char *ptr1= &NS[m];
        char *ptr2= &NS[n];

        NS= ptr1;
        NS[n]= '\0';
        return NS;
    }

int main() {
    char st[200];
    printf("Enter String: ");
    gets(st);

    printf("Sliced String: %s", slice(st, 1,3));
    return 0;
}