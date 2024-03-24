//
// Created by Blessing Ajala on 24/03/2024.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int palindromeChecker(char *myString) {
    int left = 0;
    int right = strlen(myString) - 1; // Adjusted to account for null terminator

    while (left < right) {
        if (myString[left] != myString[right]) return 0;
        left++;
        right--;
    }

    return 1;
}

int main() {
    char input[100]; // Define a buffer to hold the input string
    printf("Enter a string: ");

    fgets(input, sizeof(input), stdin);

    // Remove the trailing newline character, if present
    if (input[strlen(input) - 1] == '\n') {
        input[strlen(input) - 1] = '\0';
    }

    int result = palindromeChecker(input);

    result ? printf("%s is a palindrome", input) : printf("%s is not a palindrome", input);

    return 0;
}
