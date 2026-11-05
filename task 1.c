#include<stdio.h>
#include<string.h>
int main(){
    char name[100];
    char copy[100];
    int length;
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    length = strlen(name);
    strcpy(copy, name);
    printf("Length of name: %d\n", length);
    printf("Copied name: %s\n", copy);
    printf("Size of name array: %lu bytes\n", sizeof(name));
    printf("Size of copy array: %lu bytes\n", sizeof(copy));
    return 0;
}
