#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int i,j;

       for(i=0;i<n;i++){
            for(j=i;j<n-1;j++){
                printf("_");

            for(j=0;j<=(2*i);j++){
                printf("*");
            }
          printf("\n");
       }

       
    

return 0;
}