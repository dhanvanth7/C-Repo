#include <stdio.h>

// Function to check if a number is self-dividing
int isSelfDividing(int num) {
    int original = num;
    int digit;

    // Loop through each digit of the number
    while (num > 0) {
        digit = num % 10;  // Get the last digit
        if (digit == 0 || original % digit != 0) {
            return 0;  // Return 0 if the number contains 0 or is not divisible by the digit
        }
        num /= 10;  // Remove the last digit
    }

    return 1;  // Return 1 if the number is self-dividing
}

int main() {
    int A, B;

    // Input the lower and upper bounds 
    scanf("%d %d", &A, &B);

    // Loop through the range [A, B]
    for (int i = A; i <= B; i++) {
        if (isSelfDividing(i)) {
            printf("%d ", i);  // Print the number if it's self-dividing
        }
    }

    printf("\n");

    return 0;
}