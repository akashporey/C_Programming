/* Quick Quiz: Write a program with three functions
1. Good morning function which prints “good morning”.
2. Good afternoon function which prints “good afternoon”.
3. Good night function which prints “good night”.
main() should call all of these in order 1→2→3 */

#include <stdio.h>

void Good_Morning();
void Good_Afternoon();
void Good_Night();

void Good_Morning(){
    printf("Good Morning\n");
}

void Good_Afternoon(){
    printf("Good Afternoon\n");
}

void Good_Night(){
    printf("Good Night\n");
}

int main() {

    Good_Morning();
    Good_Afternoon();
    Good_Night();
    return 0;
}