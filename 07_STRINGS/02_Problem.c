// Write your own version of strlen function from <string.h>

#include <stdio.h>

int stlen(char st[]){
    int i=0, count;
    char c= st[i];
    while(c!='\0'){
        c=st[i];
        i++;
    }
    count=i-1;
    return count;
}
int main() {
    char st[10];
    printf("Enter the string: ");
    gets(st);
    printf("Length of the string: %d", stlen(st));
    return 0;
}