#include<stdio.h>
#include<string.h>
struct movie{
    char title[50];
    char genre[30];
    char director[50];
    int releaseYear;
    float rating;
};
int main(){
    struct movie movies[50];
    int count = 0;
    int choice, i;
    do{
        printf("\n\tMovie management System\n");
        printf("1. Add New movie\n");
        printf("2. Search movie by Genre\n");
        printf("3. Display All movies\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice){
            case 1:
                if (count < 50){
                    printf("\nEnter movie Title: ");
                    scanf("%s", movies[count].title);
                    printf("Enter Genre: ");
                    scanf("%s", movies[count].genre);
                    printf("Enter Director: ");
                    scanf("%s", movies[count].director);
                    printf("Enter Release Year: ");
                    scanf("%d", &movies[count].releaseYear);
                    printf("Enter Rating: ");
                    scanf("%f", &movies[count].rating);
                    count++;
                    printf("\nmovie Added Successfully!\n");
                }
                else{
                    printf("movie Storage is Full!\n");
                }
                break;
            case 2:
            	{
                char searchGenre[30];
                int found = 0;
                printf("\nEnter Genre to Search: ");
                scanf("%s", searchGenre);
                for (i=0; i<count; i++){
                    if(strcmp(movies[i].genre, searchGenre) == 0){
                        printf("\nmovie Found!\n");
                        printf("Title: %s\n", movies[i].title);
                        printf("Genre: %s\n", movies[i].genre);
                        printf("Director: %s\n", movies[i].director);
                        printf("Release Year: %d\n", movies[i].releaseYear);
                        printf("Rating: %.1f\n", movies[i].rating);
                        found = 1;
                    }
                }
                if(found == 0){
                    printf("No movie Found in this Genre!\n");
                }
                break;
            }
            case 3:
                if(count == 0){
                    printf("\nNo movies Available!\n");
                }
                else{
                    for(i=0; i<count; i++){
                        printf("\n\tMovie %d\n", i + 1);
                        printf("Title: %s\n", movies[i].title);
                        printf("Genre: %s\n", movies[i].genre);
                        printf("Director: %s\n", movies[i].director);
                        printf("Release Year: %d\n", movies[i].releaseYear);
                        printf("Rating: %.1f\n", movies[i].rating);
                    }
                }
                break;
            case 4:
                printf("Exiting Program...\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }
    } while (choice != 4);
    return 0;
}
