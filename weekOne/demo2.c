#include <stdio.h>
#include <string.h>

int main(void) {

    FILE * input;
    FILE * output; //Create a pointer to a file 
    output = fopen("data.txt", "w"); //open data.txt for writing, "r" -> for reading 

    char word[10];
    scanf("%s", word);
    for(int i = 0; i < strlen(word); i++){
        fprintf(output, "%c\n", word[i]);
    }
    fclose(output);


    input = fopen("data2.txt", "r");
    while(fscanf(input, "%s", word) != EOF) {
        printf("%s\n", word);
    }
    fclose(input);
    return 0;
}