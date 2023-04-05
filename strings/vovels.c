#include <stdio.h>

// special cahracters 

int main(){
    char str[30] = "geeksforgeeks%";
    
    int vovels;


    for(int i = 0;i<= sizeof(str);i++){
        if((str[i] == 'a') || (str[i]== 'e') || (str[i]=='i') || (str[i] =='o') || (str[i] == 'u')){
            vovels++;
        }
        else if(str[i] == '%'){
            printf("special\n                                                   ");
        }

    }

    printf("%d",vovels);
    
return 0;
}