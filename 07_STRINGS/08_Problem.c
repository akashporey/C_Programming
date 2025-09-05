/* Write a program to check whether a given character is present in a string or not.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    int contains=0;
    char st[] = "I am doing B.tech";
    for (int i = 0; i < strlen(st); i++)
    {
        if(st[i]==ch){
            contains=1;
            break;
        }
    }
    
    if (contains==1)
    {
        printf("Yes, this character is present.");
    }
    else{
        printf("No, this character is not present.");
    }
    
    return 0;
}