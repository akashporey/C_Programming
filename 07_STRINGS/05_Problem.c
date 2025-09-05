/* Write a program to encrypt a string by adding 1 to the ascii value of its
   characters.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char st[] = "Akash";
    for (int i = 0; i < strlen(st); i++)
    {
        st[i]=st[i]+1;
    }

    printf("%s", st);
    
    return 0;
}