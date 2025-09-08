/* Take name and salary of two employees as input from the user and 
   write them to a text file in the following format:
   i. Name1, 3300
   ii. Name2, 7700
*/

#include <stdio.h>

int main() {
    char name1[15], name2[15];
    float salary1, salary2;
    FILE* ptr;
    ptr= fopen("04file.txt", "w");

    printf("Enter the name1: ");
    scanf("%s", name1);
    printf("Enter the name1 salary: ");
    scanf("%f", &salary1);

    printf("Enter the name2: ");
    scanf("%s", name2);
    printf("Enter the name2 salary: ");
    scanf("%f", &salary2);

    fprintf(ptr, "%s", name1);
    fprintf(ptr, "%s", ", ");
    fprintf(ptr, "%.2f", salary1);
    fprintf(ptr, "%c", '\n');

    fprintf(ptr, "%s", name2);
    fprintf(ptr, "%s", ", ");
    fprintf(ptr, "%.2f", salary2);
    fprintf(ptr, "%c", '\n');


    return 0;
}