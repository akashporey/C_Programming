//Write a program to find greatest of four numbers entered by the user.

#include <stdio.h>

int main() {
        int a,b,c,d;
        printf("Enter first number: ");
        scanf("%d", &a);

        printf("Enter second number: ");
        scanf("%d", &b);

        printf("Enter third number: ");
        scanf("%d", &c);

        printf("Enter foruth number: ");
        scanf("%d", &d);

        if(a>b && a>c && a>d){
            printf("Greatest of four number is %d", a);
        }
        else if (b>a && b>c && b>d)
        {
            printf("Greatest of four number is %d", b);
        }
        else if (c>a && c>b && c>d){
            printf("Greatest of four number is %d", c);
        }
        else
        {
            printf("Greatest of four number is %d", d);
        }

        return 0;
}