/*
Program Name: Public Transport Fare System
Purpose: To calculate passenger fares
         and apply discounts to senior citizens.
Author: Student
*/

#include <stdio.h>

int main() {

    // Declare variables
    int age;
    float fare, finalFare;

    // Request passenger age
    printf("Enter passenger age: ");
    scanf("%d", &age);

    // Request normal transport fare
    printf("Enter normal fare: ");
    scanf("%f", &fare);

    // Check if passenger qualifies for discount
    if (age >= 60) {
        finalFare = fare * 0.8;
    } else {
        finalFare = fare;
    }

    // Display final fare
    printf("Final fare: %.2f\n", finalFare);

    return 0; // End program
}