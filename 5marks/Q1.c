#include <stdio.h>



void bmi()
{
    printf("enter weight and height : ");
    float height , weight , b;
    scanf("%f",&weight);
    scanf("%f",&height);
    height = height*0.3048;
    b= weight/(height*height);
    printf("bmi :  %f",b);
    printf("\ngrade : ");
    if(b<15)
    {
        printf("Starvation");
    }
    else if(b<17.5)
    {
        printf("Anorexic");
    }
    else if(b<18.5)
    {
        printf("Underweight");
    }
    else if(b<24.9)
    {
        printf("Ideal");
    }
    else if(b<25.9)
    {
        printf("Overweight");
    }
    else if(b<39.9)
    {
        printf("Obese");
    }
    else
    {
        printf("Morbidly Obese");
    }
}