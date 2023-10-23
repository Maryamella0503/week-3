#include <stdio.h>

int calculateStringLength(const char *str) {
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }

    return length;
}

int main() {
    char inputString[] = "Hello, World!";
    int length = calculateStringLength(inputString);

    printf("Length of the string: %d\n", length); 

    return 0;
}