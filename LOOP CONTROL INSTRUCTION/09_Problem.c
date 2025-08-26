// Write a program to check whether a given number is prime or not using while and do-while loop.

#include <stdio.h>

int main() {
        int n,i=2, not_prime=0;
        printf("Enter a numer: ");
        scanf("%d",&n);
        if(n==0 || n==1){
            not_prime=1;
        }
        else{
        // while(i<n){
        //     if(n%i==0){
        //         not_prime=1;
        //         break;
        //     }
        //     i++;
        // }

        do {
            if(n%i==0){
                not_prime=1;
                break;
            }
            i++;
        }while(i<n);
    }
        if(not_prime==1){
            printf("This number is not prime");
        }
        else{
            printf("This number is prime");
        }
        return 0;
}