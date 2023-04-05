#include <stdio.h>
#include <string.h> //  
struct student{
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    struct student s1;
    s1.roll = 1664;
    s1.cgpa = 9.2;
    //  not working s1.name = "shradha";
    strcpy(s1.name,"aditya");

    printf("student name %s\n", s1.name);
    printf("student roll no %d\n", s1.roll);
    printf("student cgpa is %f", s1.cgpa);
    struct student s1;
    s1.roll = 1664;
    s1.cgpa = 9.2;

    //  not working s1.name = "shradha";
    strcpy(s1.name,"tom");

    printf("student name %s\n", s1.name);
    printf("student roll no %d\n", s1.roll);
    printf("student cgpa is %f", s1.cgpa);
    struct student s1;
    s1.roll = 1664;
    s1.cgpa = 9.2;

    //  not working s1.name = "shradha";
    strcpy(s1.name,"aditya");

    printf("student name %s\n", s1.name);
    printf("student roll no %d\n", s1.roll);
    printf("student cgpa is %f", s1.cgpa);




return 0;
}