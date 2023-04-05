#include <stdio.h>

void swp(int *a,int *b)
{
    *a = (*a)+ (*b); 
    *b = (*a) - (*b);
    *a = (*a)-(*b);
    printf(" a= %d and b= %d",*a,*b);

}


int main(){
     int x ,y ;
    printf("enter digits : ");
    scanf("%d",&x);
    scanf("%d",&y);
    
    swp(&x,&y);

return 0;
}