#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello ,  my  Name is     Harshit  Kumar     Sevkani.   ";
    int i = 0, j = 0;
    char new_str[strlen(str)];
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            new_str[j++] = str[i];
        }
        i++;
    }
    new_str[j] = '\0';
    printf("Original string: %s\n", str);
    printf("String with spaces removed: %s", new_str);
    return 0;
}