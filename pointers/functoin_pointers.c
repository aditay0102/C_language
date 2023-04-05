#include <stdio.h>

void square(int n);
void _square(int* n);// pass by reference

int main(){
    int number = 4;
    square(number);
    printf("number is %d\n",number); // here the value of number is now changed man 

    _square(&number);
    printf("number = %d\n", number);   

return 0;
}

void square(int n){ // makes a copy of value from the main  or call by value
    n = n*n;
    printf("square = %d\n" , n);
}

void _square(int* n){
    *n =  (*n) * (*n); // 4 * 4;
    printf("square = %d\n" , *n); 
}