/* Write a program to modify a file containing an integer to double its value.
*/

#include <stdio.h>

int main() {
    FILE* ptr;
    int num;
    ptr= fopen("05file.txt", "r");
    fscanf(ptr, "%d", &num);
    fclose(ptr);
    
    ptr= fopen("05file.txt", "w");
    fprintf(ptr, "%d", 2*num);

    fclose(ptr);

    return 0;
}