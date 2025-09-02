/* Create an array of size 3 x 10 containing multiplication tables of the 
   numbers a custom input given by the user.
*/ 

#include <stdio.h>

int main() {
    int multi_table[3][10];
    int num[3];
    for(int i=0;i<3; i++){
        printf("Enter the %d element: ", i+1);
        scanf("%d", &num[i]);
    }

    for(int i=0; i<3;i++){
        for(int j=0; j<10;j++){
        multi_table[i][j]= num[i]*(j+1);
        }
    }

     for(int i=0; i<3;i++){
        printf("Table of %d: ",num[i]);
        for(int j=0; j<10;j++){
        printf(" %d ",multi_table[i][j]);
        }
        printf("\n");
    }

    return 0;
}