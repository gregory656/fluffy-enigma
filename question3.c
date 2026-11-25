#include <stdio.h>

int main() {
    int age;
    float fare, discountedFare;

    printf("Enter passenger age: ");
    scanf("%d", &age);

    printf("Enter normal fare: ");
    scanf("%f", &fare);

    if (age >= 60) {
        discountedFare = fare * 0.8;
        printf("Discounted fare: %.2f\n", discountedFare);
    } else {
        printf("Normal fare: %.2f\n", fare);
    }

    return 0;
}