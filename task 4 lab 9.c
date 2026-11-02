#include <stdio.h>
#include <string.h> // Required for strcmp

// Changed return types to void since they don't return values
void sum(int a, int b) {
    printf("Sum of 2 numbers is: %d\n", a + b);
}

void product(int a, int b) {
    printf("Product of 2 numbers is: %d\n", a * b); // Fixed typo from 'sum' to 'product'
}

void find_max(int a, int b) {
    if (a > b) {
        printf("Max of 2 numbers is: %d\n", a);
    } else {
        printf("Max of 2 numbers is: %d\n", b);
    }
}

// Changed command to a char pointer (string) instead of a single char
void compute(char* command, int* a, int* b) {
    // Used strcmp to properly compare strings in C
    if (strcmp(command, "add") == 0) {
        sum(*a, *b);
    } else if (strcmp(command, "product") == 0) {
        product(*a, *b);
    } else if (strcmp(command, "max") == 0) {
        find_max(*a, *b);
    } else {
        printf("Invalid command entered.\n");
    }
}

int main() {
    int a = 0, b = 0; // Initialize both variables properly
    
    printf("Enter number 1: ");
    scanf("%d", &a);
    
    printf("Enter number 2: ");
    scanf("%d", &b);
    
    // Declared as a string buffer to hold the input word safely
    char command[20]; 
    printf("Enter the command (add, product, max): ");
    scanf("%19s", command); // Safe string input limited to 19 characters
    
    compute(command, &a, &b);
    
    return 0;
}

