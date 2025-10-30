#include <stdio.h>

int main() {
    int temp[4][4] = {
        {12, 15, 10, 9},
        {11, 8, 12, 13},
        {14, 13, 9, 7},
        {16, 11, 10, 8}
    };

    int i, j;
    printf("Cold Spots (colder than all adjacent neighbors):\n\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {

            int current = temp[i][j];
            int isCold = 1; 

            
            if (i > 0 && temp[i - 1][j] <= current)
                isCold = 0;

           
            if (i < 3 && temp[i + 1][j] <= current)
                isCold = 0;

          
            if (j > 0 && temp[i][j - 1] <= current)
                isCold = 0;

           
            if (j < 3 && temp[i][j + 1] <= current)
                isCold = 0;

            
            if (isCold)
                printf("Cold spot at (Row %d, Col %d): %d°C\n", i + 1, j + 1, current);
        }
    }

    return 0;
}

