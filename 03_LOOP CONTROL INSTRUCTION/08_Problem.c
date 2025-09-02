//. Write a program to check whether a given number is prime or not using loops.

#include <stdio.h>

int main() {
        int n, not_prime=0;
        printf("Enter a numer: ");
        scanf("%d",&n);
        if(n==0 || n==1){
            not_prime=1;
        }
        else{
        for(int i=2; i<n; i++){
            if(n%i==0 && n!=2){
                not_prime=1;
                break;
            }
        }
    }
        if(not_prime==1){
            printf("The number is not prime");
        }
        else{
            printf("The number is prime");
        }
        return 0;
}