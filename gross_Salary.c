#include <stdio.h>


int main(){
    int salary;
    int hra;
    int da;
    int grss;
    printf(" enter the salary: \n");
    scanf("%d",&salary);
    printf(" enter the hra: \n");
    scanf("%d",&hra);
    printf(" enter the da: \n");
    scanf("%d",&da);

    grss = (salary+hra+da)/12;
    printf("the gross salary is :- \n");
    printf("%d",grss);







return 0;
}