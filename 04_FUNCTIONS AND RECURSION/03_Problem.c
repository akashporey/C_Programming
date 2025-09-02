/* Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
earth. Consider g = 9.8m/s2       */

#include <stdio.h>

float calculate_force(float);

float calculate_force(float m){
    return m*9.8;
}
int main() {
    int a=15;
    printf("Force is : %f", calculate_force(a));    
        return 0;
}