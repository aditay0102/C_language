#include <stdio.h>

int main(){
    int n = 7;
    int m = (n+1)/2;

    int r,c;
    for(r=1;r<=n;r++){
        for(c=1;c<=n;c++){   
            if( c==m || r == m ){
            printf("* ");
           }
           else{
            printf("_ ");
           }

        }   
        printf("\n");
    }

return 0;
}