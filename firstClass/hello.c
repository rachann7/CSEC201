//Includes - library files
#include <stdio.h> //include the standard input/output library
#include <string.h> // Give us functions for treating character arrays like strings 

//Every c program needs a main

//<return type> <name of function>(<parameter list>)

// int -> return type (integer)
//main -> the function name
//void -> explicitly indicates that there are no parameters 

int main(void) {

    char name[20]; //character array of length 20
    printf("Enter your name: ");
    scanf("%s", name); 
        //scanf -> function to get input
        //%s -> format specifier that tells scanf our input is a string
        // name -> where scanf will store the string that is read in
    
    printf("Hello %s", name); // note that this ends in a semi colon (;)
        // %s -> tells printf we will output a string 
        //name -> fills in the blank in the output 
}
