/* Write a program to generate multiplication table of a given number
   in text format. Make sure that the file is readable and well formatted.
*/

#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("02file.txt", "w");
    int n = 5;
    fprintf(fptr, "Multiplication table of %d:\n", n);
    for (int i = 1; i < 11; i++)
    {
        fprintf(fptr, "%d X %d = %d\n", n, i, n * i);
    }

    fclose(fptr);
    return 0;
}