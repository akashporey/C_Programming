// Use the library function to calculate the area of a square with side a.

#include <stdio.h>
#include<math.h>

int main() {
        int a;
        printf("Enter the value of side of the square: ");
        scanf("%d", &a);
        printf("The Area of this square is %f", pow(a,2));
        return 0;
}