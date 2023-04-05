#include <stdio.h>

int main(){
    int n = 5;

    int r,c;
    for(r=1;r<=n;r++){
        for(c=1;c<=n;c++){

           if(c==r ||  c == n-r+1){ // another condition can br r+c == n+1;
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