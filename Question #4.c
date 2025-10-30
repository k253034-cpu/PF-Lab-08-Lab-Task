#include <stdio.h>

int main() {
    int seats[3][3] = {
        {1, 0, 1},  
        {0, 0, 1}, 
        {1, 1, 0}   
    };

    int i, j, available = 0;

    printf("Cinema Seat Availability:\n\n");

   
    for (i = 0; i < 3; i++) {
        printf("Row %d: ", i + 1);
        for (j = 0; j < 3; j++) {
            printf("%d ", seats[i][j]);
        }
        printf("\n");
    }

    printf("\nList of available seats (0 = available):\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (seats[i][j] == 0) {
                available++;
                printf("  Row %d, Seat %d\n", i + 1, j + 1);
            }
        }
    }

    printf("\nTotal available seats = %d\n", available);

    return 0;
}

