#include <stdio.h>
#include<string.h>
struct student
{
    int code;
    float marks;
    char name[15];
};

int main() {
    struct student s1, s2;
    s1.code =1234;
    s1.marks = 82.5;
    strcpy(s1.name , "Akash");

    printf("%d\n%s\n%.1f", s1.code, s1.name, s1.marks);
    
    return 0;
}