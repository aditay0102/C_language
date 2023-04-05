#include <stdio.h>

void swap(int *n, int *m);

int main(){
    int n = 4;
    int m = 5;

    printf("before swap  n = %d and m = %d\n",n ,m);
    swap(&n,&m);
    printf("after swap  n = %d and m = %d",n ,m);



return 0;
}

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}