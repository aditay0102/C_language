#include <stdio.h>

// ascii of a is  97 and z = 122 


// lowercase to uppercase
void ltoUpper(char str[]){
    for(int i = 0;i<sizeof(str);i++){
         if((str[i] >= 'a') && (str[i] <= 'z')){
            str[i] = str[i] - 32; // 32 is the difference  
        }
    }
}

//  upprecase to lowercase 
void utoLower(char str[]){
     for(int i = 0;i<sizeof(str);i++){
         if((str[i] >= 'a') && (str[i] <= 'z')){
            str[i] = str[i] + 32;
        } // 32 is the difference  
    }
}


int main(){
    char str[30] = {" I love my india "};

    ltoUpper(str);

    printf("%s",str);


return 0;
}