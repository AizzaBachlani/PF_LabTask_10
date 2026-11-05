#include<stdio.h>
#include<string.h>
int main(){
    FILE *fp;
    char name[50];
    char line[50];
    int i, count = 0;
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }
    for (i=0; i<3; i++) {
        printf("Enter student name %d: ", i + 1);
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0';
        fprintf(fp, "%s\n", name);
    }
    fclose(fp);
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }
    printf("\nStudent Names:\n");
    while (fgets(line, sizeof(line), fp) != NULL) {
        count++;
        line[strcspn(line, "\n")] = '\0';

        printf("%d. %s\n", count, line);
    }
    printf("\nTotal students: %d\n", count);
    fclose(fp);
    return 0;
}
