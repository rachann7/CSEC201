#include <stdio.h> //include standard input/output library
#include <string.h> // strings are not native to C

// int -> return type 
// main -> name of the function 
// void -> there are no parameters

int main(void) {
    char word[10]; //create a string of max length 20, indices are 0-19
    scanf("%s", word); // this will get input from the user and store it into "word"
    // printf("%s", word); echo input back
    printf("Base of the array: %p\n", word);
    for(int i=0; i<strlen(word); i++) {  // "strlen" -> string ptr (beginning of the array) and it counts up until it finds a null character
        // printf("%p - %c\n", &(word[i]), word[i]);
        printf("%p -%c, %c\n", &(word[i]), word[i], *(&(word[i])));
    }
}