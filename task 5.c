#include<stdio.h>
#include<string.h>
int main(){
    char cities[5][50];
    int i, max = 0, longest = 0;
    for (i=0; i<5; i++){
        printf("Enter city %d: ", i+1);
        fgets(cities[i], sizeof(cities[i]), stdin);
        cities[i][strcspn(cities[i], "\n")] = '\0';
    }
    printf("\nCity Names:\n");
    for (i=0; i<5; i++) {
        printf("%s\n", cities[i]);
    }
    for (i=0; i<5; i++) {
        if (strlen(cities[i]) > max) {
            max = strlen(cities[i]);
            longest = i;
        }
    }
    printf("\nLongest city name: %s\n", cities[longest]);
    printf("Length: %d\n", max);
    return 0;
}
