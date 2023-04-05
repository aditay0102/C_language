
#include <stdio.h>

void days(int d){

    if(d == 1){
        printf("31");
    }
    if(d == 2){
        printf("28");
    }
    if(d == 3){
        printf("31");
    }
    if(d == 4){
        printf("30");
    }
    if(d == 5){
        printf("31");
    }
    if(d == 6){
        printf("30");
    }
    if(d == 7){
        printf("31");
    }
    if(d == 8){
        printf("31");
    }
    if(d == 9){
        printf("30");
    }
    if(d == 10){
        printf("31");
    }
    if(d == 11){
        printf("30");
    }
    if(d == 12){
        printf("31");
    }
}


int main(){
    printf("enter the number of the month \n");
    int month;
    scanf("%d",&month );

    days(month);

return 0;
}