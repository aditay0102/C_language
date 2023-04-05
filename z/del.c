#include<stdio.h>
#include<math.h>


int main()
{
    int n , m;
    scanf("%d",&n);
    scanf("%d",&m);

    int count = 0;
    printf("prime : ");
    for(int i = n ; i<=m ; i++)
    {
        int num = i;
        int flag = 0;

        
        for(int j = 2 ; j<=sqrt(num) ; j++)
        {
            if(num%j==0)
            {
                flag = 1;
                break;
            }
        }
        if(flag==0)
        {
            printf(" %d ",num);
            count++;
        }
    }

    printf("\ncount : %d",count);



    return 0;
}