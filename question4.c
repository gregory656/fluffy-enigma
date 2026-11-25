#include <stdio.h>

int main() {
    int i, age;
    float fare, finalFare;

    for (i = 1; i <= 10; i++) {

        printf("\nPassenger %d\n", i);

        printf("Enter passenger age: ");
        scanf("%d", &age);

        printf("Enter normal fare: ");
        scanf("%f", &fare);

        if (age >= 60) {
            finalFare = fare * 0.8;
        } else {
            finalFare = fare;
        }

        printf("Final fare: %.2f\n", finalFare);
    }

    return 0;
}