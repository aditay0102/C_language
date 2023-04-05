#include <stdio.h>

int main(){
    int arr[2][2] = { {1,2}, {3,4}};

    int (*ptr)[2] = arr;
    printf("%d",**(ptr+1));



return 0;
}