#include<stdio.h>
#include<string.h>
#include <ctype.h>
#define MAX 100
int main() {
    char input[MAX];
    int stack[MAX];
    int top = -1;  
    printf("Enter a string with parentheses: ");
    fgets(input, MAX, stdin);
    for (int i = 0; i < strlen(input); i++) {
        if (input[i] == '(') {
            stack[++top] = '(';
        } else if (input[i] == ')') {
            if (top >= 0 && stack[top] == '(') {
                top--;
            } else {
                printf("You Entered Something else .\n");
                return 0;
            }
        }
    }
    if (top == -1) {
        printf("Parentheses are balanced.\n");
    } else {
        printf("Parentheses are not balanced.\n");
    }
    return 0;
}