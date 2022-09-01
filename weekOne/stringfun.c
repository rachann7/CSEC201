#include <stdio.h>
#include <string.h>

int main(void) {
    
    char first[10];
    char second[10];

    printf("Enter a string: ");
    scanf("%s", first);
    printf("Enter a string: ");
    scanf("%s", second);

    for(int i =0; i < 10; i ++) {
        printf("%p - %c", &(first[i]), first[i]);
        printf("\t%p - %c\n", &(second[i]), second[i]);
    }

    return 0;
}