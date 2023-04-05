#include <stdio.h>


//fibonacci
int fib(int n){

    if(n==1)
    {
        return 0;
    }
    if(n==2)
    {
        return 1;
    }

    return fib(n-1) + fib(n-2);`
    

}

int main(){
    int a,b;

    // scanf("%d",&a);
    for(int i = 1 ; i<=10 ; i++)
    {
    int ans = fib(i);
    printf("\n %d",ans);
    }




return 0;
}