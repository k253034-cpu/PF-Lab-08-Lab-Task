#include <stdio.h>

int main() {
    int i, j;
    char stars[64], nums[64], letters[64];
    char *p;

    for (i = 1; i <= 5; i++) {
       
        p = stars;
        *p = '\0';
        for (j = 1; j <= i; j++) {
            p += sprintf(p, "* ");
        }

      
        p = nums;
        *p = '\0';
        for (j = 1; j <= i; j++) {
            p += sprintf(p, "%d ", j);
        }

        
        p = letters;
        *p = '\0';
        for (j = 0; j < i; j++) {
            p += sprintf(p, "%c ", 'A' + j);
        }

       
        printf("%-14s| %-14s| %s\n", stars, nums, letters);
    }

    return 0;
}

