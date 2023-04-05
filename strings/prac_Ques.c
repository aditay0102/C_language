#include <stdio.h>

int main(){
    int x;
    int *ptr;

    ptr = &x;
    *ptr = 0; // s = 0

    printf("x = %d\n", x);// x = 0
    printf("*ptr = %d\n",*ptr);x = 0;

    *ptr += 5; // *ptr = *ptr + 5
    printf("x = %d\n", x);      //  5 
    printf("*ptr = %d\n", *ptr); // 5


    (*ptr)++; // (x)++ // x  = 5, now x = 6;
    printf("x = %d\n",x);
    printf("*prt = %d\n",x);

return 0;
}