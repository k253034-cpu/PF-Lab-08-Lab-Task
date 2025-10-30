#include <stdio.h>

int main() {
    int rows = 5, cols = 5;
    char seating[5][5];
    int i, j;
    int students = 0, empty = 0;

    
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if ((i + j) % 2 == 0) {
                seating[i][j] = 'x';  
                students++;
            } else {
                seating[i][j] = 'o';  
                empty++;
            }
        }
    }

    
    printf("Classroom Seating Chart:\n");
    printf("========================\n");
    printf("(x = Student, o = Empty)\n\n");

    for (i = 0; i < rows; i++) {
        printf("Row %d ", i + 1);
        for (j = 0; j < cols; j++) {
            printf("%c ", seating[i][j]);
        }
        printf("\n");
    }

    
    printf("\nSummary:\n");
    printf("Students seated: %d\n", students);
    printf("Empty desks: %d\n", empty);
    printf("Total desks: %d\n", rows * cols);

    return 0;
}

