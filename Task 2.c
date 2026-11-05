#include<stdio.h>
#include<string.h>
int main(){
    char first[50];
    char last[50];
    char full[100];
    printf("Enter first name: ");
    fgets(first, sizeof(first), stdin);
    first[strcspn(first, "\n")] = '\0';
    printf("Enter last name: ");
    fgets(last, sizeof(last), stdin);
    last[strcspn(last, "\n")] = '\0';
    strcpy(full, first);
    strcat(full, " ");
    strcat(full, last);
    printf("Full name: %s\n", full);
    return 0;
}
