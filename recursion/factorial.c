#include<stdio.h>  
  
long factorial(int n); 
   
int main(void)  
{  
  int n;  
  scanf("%d", &n);

  long res = factorial(n);

  printf("%ld", res);
  return 0;  
}  

long factorial(int n){
    if(n>0){
        return(n*factorial(n-1));
    }
    else{
        return 1    ;
    }
}