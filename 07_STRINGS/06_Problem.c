/* Write a program to decrypt the string encrypted using encrypt function in
   problem 6.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char st[] = "Blbti";
    for (int i = 0; i < strlen(st); i++)
    {
        st[i]=st[i]-1;
    }

    printf("%s", st);
    
    return 0;
}