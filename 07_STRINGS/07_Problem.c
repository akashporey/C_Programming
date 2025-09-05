/* Write a program to count the occurrence of a given character in a string.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    int count=0;
    char st[] = "Coding is my passion";
    for (int i = 0; i < strlen(st); i++)
    {
        if(st[i]==ch){
            count++;
        }
    }

    printf("'%c' occurred in the string: %d times", ch, count);
    
    return 0;
}