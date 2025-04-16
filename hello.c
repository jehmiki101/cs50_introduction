#include <stdio.h>

int main (void) {
    char name[30];

    printf("Hello World!\n");
    printf("What is your name? ");
    scanf("%s", &name);
    printf("Hello, %s\n", name);
}