//Write a program to determine whether a character entered by the user is lowercase or not.
// https://www.ascii-code.com/

#include <stdio.h>

int main() {
        char ch;
        printf("Enter a character: ");
        scanf("%c", &ch);
        if(ch>=97 && ch<123){
                printf("This character is lowercase");
        }
        else{
                printf("This character is not lowercase");
        }
        return 0;
}