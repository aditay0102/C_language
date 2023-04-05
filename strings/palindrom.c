#include <stdio.h>


int main(){
    char str[30] = {"adi"};

  // rightmost corners of str
    int l = 0;
    int h = sizeof(str) - 1;
 
    // Keep comparing characters
    // while they are same
    while (h > l) {
        if (str[l++] != str[h--]) {
            printf("%s is not a palindrome\n", str);
            return 0;
            // will return from here
        }
    }
 
    printf("%s is a palindrome\n", str);
return 0;
}