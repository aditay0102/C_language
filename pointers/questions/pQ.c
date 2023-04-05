#include <stdio.h>

void printAddress(int *n);






int main(){
    int n = 4;
    int b = 2;

    printf("%p\n",&n);
    printAddress(&n);

    sumv(int &n,int &b); 

return 0;
}

void printAddress(int *n){
    printf("%p\n",  n);
}

