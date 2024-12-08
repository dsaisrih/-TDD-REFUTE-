#include <stdio.h>
#include <string.h>
int permute(char *str, int l, int r) {
    if (l == r) {
        printf("%s\n", str);
    } else {
        for (int i = l; i <= r; i++) {
            // Swap characters at positions l and i
            char temp = str[l];
            str[l] = str[i];
            str[i] = temp;
            // Recursive call
            permute(str, l + 1, r);
            // Backtrack to restore the original string
            str[i] = str[l];
            str[l] = temp;
        }
    }
    return 0;
}
int main() {
    char userInput[100];
    printf("Enter a string for permutations: ");
    scanf("%s", userInput);
    printf("Permutations of %s:\n", userInput);
    permute(userInput, 0, strlen(userInput) - 1);
    return 0;
}
/*Test Cases :
Test Case 1: Input - 23 --> Output - 23 , 32
Test Case 2: Input - AB --> Output - AB , BA
Test Case 3: Input - A --> Output - A
Test Case 4: Input - SAI --> Output - SAI , SIA , ASI , AIS , IAS , ISA*/