/* Write a program to read a text file character by character and write 
   its content twice in separate file.
*/

#include <stdio.h>

int main() {
    char ch;
    FILE* ptr1;
    FILE* ptr2;
    ptr1 = fopen("03file.txt", "r");
    ptr2 = fopen("03afile.txt", "w");
    while(1){
        ch= fgetc(ptr1);
        if(ch==EOF){
            break;
        }
        else{
            fprintf(ptr2, "%c", ch);
            fprintf(ptr2, "%c", ch);
        }
    }
    
    return 0;
}