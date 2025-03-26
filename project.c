<!DOCTYPE html>
#include <stdio.h>

#define TAX_RATE 0.05  

int main() {
    char name[50];
    int age;
    char gender;
    char destination[50];
    int ticket_price;
    float tax, total_cost;

  
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your gender (M/F): ");
    scanf(" %c", &gender);
    printf("Enter your destination: ");
    scanf("%s", destination);
    printf("Enter the ticket price: ");
    scanf("%d", &ticket_price);

    tax = ticket_price * TAX_RATE;
    total_cost = ticket_price + tax;

    printf("\n--- Ticket Details ---\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Gender: %c\n", gender);
    printf("Destination: %s\n", destination);
    printf("Ticket Price: %d\n", ticket_price);
    printf("Tax: %.2f\n", tax);
    printf("Total Cost: %.2f\n", total_cost);

    return 0;
}
