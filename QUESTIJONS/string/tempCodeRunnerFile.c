  #include <stdio.h>

  int main(){
    char str[30] = "i love my india";
    int spaces;

    for(int i = 0;str[i] != '\0';i++){
        if(str[i] == " "){
            spaces = spaces + 1;
        }
        printf("%c",str[i]);
    }
    printf("\n");
    printf("%d",spaces);

return 0;
  }