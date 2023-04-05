#include <stdio.h>


void resutl(char aa){
    if( aa >= 'a' && aa <= 'z' ){
        printf("the character is in lowercase");
    }
    else if( aa >= 'A' && aa <= 'Z' ){
        printf("the character is in uppercase");
    }
    else{
        printf("its out of range");
    }
    
}

int main(){
    char aai;
    printf("enter the cahracter \n");
    scanf("%c",&aai);

   resutl(aai);
   
return 0;
}