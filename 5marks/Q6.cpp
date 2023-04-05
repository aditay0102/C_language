#include <stdio.h>



int main(){
    int n;
    scanf("%d",&n);

    int sum = 0;
    while(n>0){
        int a = n/10;
        int b = n%10;
        sum = sum + b;

        n = n/10;
    }

    printf("%d \n",sum);


    if(sum%5 == 0){
        printf("its is eligible for Gift Coupen ");
    }
    else{
        printf("its it not eligible for Gift Coupen");
    }


return 0;
}