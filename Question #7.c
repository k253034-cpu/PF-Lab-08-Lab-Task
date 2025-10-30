#include <stdio.h>

int main() {
    int i, j;
    char stars[100], nums[100], letters[100];
    char *p;

    
    for (i = 1; i <= 5; i++) {
       
        p = stars;
        *p = '\0';
        for (j = 1; j <= (2 * i - 1); j++) {
            p += sprintf(p, "* ");
        }

        
        p = nums;
        *p = '\0';
        for (j = 1; j <= (2 * i - 1); j++) {
            p += sprintf(p, "%d ", j);
        }

        
        p = letters;
        *p = '\0';
        for (j = 0; j < (2 * i - 1); j++) {
            p += sprintf(p, "%c ", 'A' + j);
        }

        
        printf("%-25s| %-25s| %s\n", stars, nums, letters);
    }

    return 0;
}

