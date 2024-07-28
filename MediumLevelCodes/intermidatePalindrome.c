#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is a palindrome
bool isPalindrome(int number) {
    int original = number;
    int reversed = 0;

    while (number > 0) {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }

    return original == reversed;
}

int main() {
    int lowerLimit, upperLimit;

    // Input the lower and upper limits
    printf("Enter the lower limit: ");
    scanf("%d", &lowerLimit);
    printf("Enter the upper limit: ");
    scanf("%d", &upperLimit);

    // Print all palindrome numbers in the range
    bool first = true;
    for (int i = lowerLimit; i <= upperLimit; i++) {
        if (isPalindrome(i)) {
            if (!first) {
                printf(", ");
            }
            printf("%d", i);
            first = false;
        }
    }
    printf("\n");

    return 0;
}
