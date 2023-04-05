#include <stdio.h>

int main(){
    float price = 100.0;
    float *ptr = &price;
    float **prt  = &ptr;

    printf("**ptr  =  %f",**prt);

    // print the value of 'i' from its pointer to pointer 
       

return  0;
}