#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("text.txt","r");
  
    
    char ch;
    //fscanf(fptr, "%c", &ch);


    ch = fgetc(fptr);
    while(ch != EOF){
        // EOF is like  NULL for 
        printf("%c",ch);
        ch = fgetc(fptr);
    }

    printf("\n");

    
    /*
    fputc('A',fptr);
    fputc('b',fptr);
    fputc('c',fptr);
    */


    //printf("%c\n",fgetc(fptr));
   // printf("%c\n",fgetc(fptr));



/*
    fprintf(fptr,"%c",'M');
    fprintf(fptr,"%c",'A');
    fprintf(fptr,"%c",'N');
    fprintf(fptr,"%c",'G');
    fprintf(fptr,"%c",'O');
*/

    fclose(fptr);
    return 0;
}