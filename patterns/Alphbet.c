#include <stdio.h>


int main(){
    char a;
    scanf("%c",&a);

    char i,j;

    for(i='A';i<=a;i++){
        for(j='A';j<=i;j++){
            if(i!=j){
                printf("%c_",i);
            }
            else{
                printf("%c",i);
            }
        }
        printf("\n");
    }



return 0;
}