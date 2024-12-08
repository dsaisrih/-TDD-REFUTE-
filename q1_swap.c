#include <stdio.h>
int swap_numbers(int *a, int *b, int *c) {
    // Correct swapping logic using a temporary variable
    int temp = *a;  // Store the value of 'a' in a temporary variable
    *a = *b;        // Assign the value of 'b' to 'a'
    *b = *c;        // Assign the value of 'c' to 'b'
    *c = temp;     // Assign the value of the temporary variable (original 'a') to 'c'
    return 0;      // Return 0 to indicate success
}
int main() {
    int a, b, c;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);
    swap_numbers(&a, &b, &c);
    printf("After swapping: a = %d, b = %d, c = %d\n", a, b, c);
    return 0;
}
/*Test Cases :
Test Case 1: Input - 1  2  3 --> Output - 2 3 1
Test Case 2: Input - 5 10 15 --> Output - 10 15 5
Test Case 3: Input - -1 0 1 --> Output - 0 -1 1
Test Case 4: Input - 200 300 100 --> Output - 300 100 200*/