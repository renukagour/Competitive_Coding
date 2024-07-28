#include <stdio.h>

int main() {
    int number, sum = 0;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Display the table and calculate the sum
    for (int i = 1; i <= 10; i++) {
        int multiple = number * i;
        printf("%d", multiple);
        if (i < 10) {
            printf(", ");
        }
        sum += multiple;
    }
    printf("\n");

    // Print the sum of all multiples
    printf("%d\n", sum);

    return 0;
}
