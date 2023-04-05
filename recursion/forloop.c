#include <stdio.h>

int frr(int *arr,int n){
    if( n==0 || n==1){
        return 1;
    }
    
        for(int j = 0;j<n;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    frr(arr,n-1);
}

int main(void){
    int n;
    scanf("%d",&n);
    int arr[n];
    //printf("enter array \n");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    frr(arr,n);

    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }


return 0;
}

