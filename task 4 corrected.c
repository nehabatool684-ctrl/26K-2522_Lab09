
#include <stdio.h>

// Function to calculate the sum
int add(int a, int b) {
    return a + b;
}

// Function to calculate the product
int multiply(int a, int b) {
    return a * b;
}

// Function to find the maximum value
int findMax(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

// Master function using a function pointer
int compute(int a, int b, int (*operation)(int, int)) {
    return operation(a, b);
}

int main() {
    int num1, num2;

    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Calling compute() with different functions
    int sum = compute(num1, num2, add);
    int product = compute(num1, num2, multiply);
    int maximum = compute(num1, num2, findMax);

    // Display results
    printf("\nSum = %d", sum);
    printf("\nProduct = %d", product);
    printf("\nMaximum = %d\n", maximum);

    return 0;
}

