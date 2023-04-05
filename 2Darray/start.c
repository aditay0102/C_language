#include <stdio.h>

int main(){

    //  intializaton of a 2D - array 
    // int arr[4][2] = {{1234,56},{23,13},{89,67},{34,54}};

    int arr[3] [2];
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            scanf("%d",&arr[i] [j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("%d ",arr[i] [j]); 
        }
        printf("\n");
    }

    
    


return 0;
}