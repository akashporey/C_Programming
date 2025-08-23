/*Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.*/

#include <stdio.h>

int main()
{
    int marks1, marks2, marks3;
    int TM;
    printf("Enter the marks1: ");
    scanf("%d", &marks1);
    printf("Enter the marks2: ");
    scanf("%d", &marks2);
    printf("Enter the marks3: ");
    scanf("%d", &marks3);
    TM = (marks1 + marks2 + marks3)/3;

    if (marks1 >= 33 && marks2 >= 33 && marks3 >= 33)
    {
        if (TM >= 40)
            printf("Student is passed");
    }
    else
    {
        printf("Student is failed");
    }
    return 0;
}