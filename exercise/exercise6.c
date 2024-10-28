#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Function to check if a character is the matching pair of the other
bool isMatchingPair(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

bool isValid(char *s) {
    int len = strlen(s);
    char *stack = (char *)malloc(len * sizeof(char)); // Stack for storing opening brackets
    int top = -1; // Stack pointer

    for (int i = 0; i < len; i++) {
        char current = s[i];

        // If current character is an opening bracket, push it onto the stack
        if (current == '(' || current == '{' || current == '[') {
            stack[++top] = current;
        }
        // If current character is a closing bracket
        else {
            // If stack is empty or brackets do not match, return false
            if (top == -1 || !isMatchingPair(stack[top--], current)) {
                free(stack);
                return false;
            }
        }
    }

    // If the stack is empty, all brackets were matched
    bool isValid = (top == -1);
    free(stack);
    return isValid;
}

int main() {
    char s[100];
    
    // Input the string of parentheses
    printf("Enter the string containing parentheses: ");
    scanf("%s", s);

    if (isValid(s)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
