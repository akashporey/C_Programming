// Write your own version of strcpy function from <string.h>

#include <stdio.h>

int stlen(char str[]){
    int i=0, count;
    while(str[i]!='\0'){
        i++;
    }
    count=i;
    return count;
}

void stcp(char st2[], char st1[]){
    for (int i = 0; i < stlen(st1); i++)
    {
        st2[i]=st1[i];
    }
    st2[stlen(st1)]='\0';
}   
int main() {
    char st1[]="Akash";
    char st2[100];
    stcp(st2,st1);
    printf("String st1: %s\nString st2: %s",st1, st2);
    return 0;
}