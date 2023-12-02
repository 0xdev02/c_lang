#include <stdio.h>
//switch statement
int main() {
    int choice;
    float a, b, result;
    // Get user input
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    // Display menu
    printf("\nSelect an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("Enter your choice (1-2): ");  
    // Get user choice
    scanf("%d", &choice);
    // Perform operation using switch statement
    switch(choice) {
        case 1:
            result = a + b;
            printf("Result: %.2f\n", result);
            break;
        case 2:
            result = a - b;
            printf("Result: %.2f\n", result);
            break;
        default:
            printf("Invalid choice. Please choose 1 for addition or 2 for subtraction.\n");
    }
    return 0;
}
