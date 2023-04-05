/*
source file

I love programming.
Working with files in C programming is fun.
I am learning C programming at Codeforwin.
monika singla9:44 AM
'\0'
Output

Total characters = 106
Total words      = 18
Total lines      = 3
Abhishek10:00 AM
#include <stdio.h>
#include <stdlib.h>
*/
int main()
{
    FILE *fptr;
    char ch;
    int c = 0, w = 0, l = 0;
    fptr = fopen("file.txt", "r");
    while ((ch = fgetc(fptr)) != EOF)
    {
        c++;
        if (ch == '\n')
        {
            l++;
        }

        if (ch == ' ' || ch == '\n' || ch == '\0' || ch == '\t')
        {
            w++;
        }
    }
    if (c > 0)
    {
        w++;
        l++;
    }
    printf("character: %d\n", c);
    printf("word: %d\n", w);
    printf(