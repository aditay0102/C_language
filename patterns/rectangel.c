#include <stdio.h>

int main(){
    int m=5,n=6;

    int r,c;
    for(r=1;r<=m;r++){
        for(c=1;c<=n;c++){

            if(c>1 && c<n && r>1 && r<n-1){
                printf(" ");
            }
            else{
            printf("*");

            }

        }
        printf("\n");
    }


return 0;
}