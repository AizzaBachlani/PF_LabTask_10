#include<stdio.h>
struct flight{
    int flightNumber;
    char departureCity[50];
    char destinationCity[50];
    char date[20];
    int availableSeats;
};
void displayflight(struct flight f){
    printf("\n----- flight Details -----\n");
    printf("flight Number: %d\n", f.flightNumber);
    printf("Departure City: %s\n", f.departureCity);
    printf("Destination City: %s\n", f.destinationCity);
    printf("Date: %s\n", f.date);
    printf("Available Seats: %d\n", f.availableSeats);
}
void bookSeat(struct flight *f){
    if (f->availableSeats > 0){
        f->availableSeats--;
        printf("\nSeat booked successfully!\n");
        printf("Remaining Seats: %d\n", f->availableSeats);
    }
    else{
        printf("\nSorry! No seats available.\n");
    }
}
int main(){
    struct flight f;
    int choice;
    printf("Enter flight Number: ");
    scanf("%d", &f.flightNumber);
    printf("Enter Departure City: ");
    scanf("%s", f.departureCity);
    printf("Enter Destination City: ");
    scanf("%s", f.destinationCity);
    printf("Enter Date: ");
    scanf("%s", f.date);
    printf("Enter Available Seats: ");
    scanf("%d", &f.availableSeats);
    do{
        printf("flight management\n");
        printf("1. Display flight Details\n2. Book a Seat\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice){
            case 1:
                displayflight(f);
                break;
            case 2:
                bookSeat(&f);
                break;
            case 3:
                printf("Exiting Program...\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }
    } while (choice != 3);
    return 0;
}
