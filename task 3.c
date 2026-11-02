#include <stdio.h>

int main() {
    int image[3][3];

    // 1. Input image values
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 3; col++) {
            printf("Enter the values for row %d column %d: ", row + 1, col + 1);
            scanf("%d", &image[row][col]);
        }
    }

    // 2. Correct pointer to an array of 3 integers
    int (*ptr)[3] = image; 

    // 3. Print original image
    printf("Original Image:\n");
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 3; col++) {
            printf("%d ", image[row][col]);
        }
        printf("\n");
    }

    int brighter[3][3];
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 3; col++) {
            
            brighter[row][col] = (ptr[row][col]) * 2; 
        }
    }

    printf("\nBrighter Image:\n");
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 3; col++) {
            printf("%d ", brighter[row][col]);
        }
        printf("\n");
    }

    return 0;
}
