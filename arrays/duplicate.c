#include <stdio.h>

void fun(int arr[],int n){
    for(int i =0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("%d ",arr[i]);
            }
           
        }
    }

}

int main(){
    int arr[5] = {1,2,1,3,3};
    fun(arr,5);
    return 0;
}