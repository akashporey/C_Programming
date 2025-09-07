/* Write a program to illustrate the use of arrow operator → in C.
*/

#include<stdio.h>
#include<string.h>

typedef struct student
{
    int id;
    float marks;
    char name[20];
}st;

int main() {
    st s;
    strcpy(s.name, "Liton");
    st* ptr= &s;

    // (*ptr).id=10;
    // (*ptr).marks=76.78;
  
    ptr->id=10;
    ptr->marks=76.78;
   

    printf("Student:\nName: %s\nid = %d\nmarks = %.2f\n",ptr->name,ptr->id, ptr->marks);
    
    return 0;
}