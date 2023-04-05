#include <stdio.h>

int main(){
    int n = 5;

        int i,j,x;

       for(i=1;i<=n;i++){
            int k = i;
            /*
            for(j=i;j<n;j++){
                printf("_");
            }
         
            for(j=1;j<=i;j++){
               printf("%d",k);
               k++;
            }
            k--;
            */
            int y = 2*i-2;
            for(x=1;x<i;x++){
                printf("%d",y);
                y-- ;
            }
            printf("\n");
       }

return 0;
}