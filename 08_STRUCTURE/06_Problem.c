/* Write a structure capable of storing date. Write a function to compare
   those dates.
*/

#include <stdio.h>
typedef struct Date
{
    int dd;
    int mm;
    int yyyy;
}dt;

int compare(dt d1, dt d2){
    if(d1.dd==d2.dd && d1.mm==d2.mm && d1.yyyy==d2.yyyy){
        return 0;
    }

    if(d1.yyyy> d2.yyyy){
        return 1;
    }
    else if(d1.yyyy< d2.yyyy){
        return -1;
    }
    else if(d1.mm> d2.mm){
        return 1;
    }
    else if(d1.mm< d2.mm){
        return -1;
    }
    else if(d1.dd> d2.dd){
        return 1;
    }
    else if(d1.dd< d2.dd){
        return -1;
    }


}
int main() {
    dt d1={21, 9, 2005};
    dt d2={25, 07, 2022};
    

    printf("%d", compare(d1,d2));

    return 0;
}