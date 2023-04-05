#include <stdio.h>

int main(){
    int n=3;
    

    int i,j;

       for(i=1;i<=n;i++){
         
          for(j=1;j<=i;j++){
            printf("%d",j*2-1);
          }

          printf("\n");
       }

       
    

return 0;
}