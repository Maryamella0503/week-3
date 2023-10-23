#include <stdio.h>
#include <stdlib.h>


int str_len(const char *str) {
    int length = 0;
    const char *ptr = str;

    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    return length;
}

char* concatStrings(const char *str1, const char *str2) {
    int len1 = str_len(str1);
    int len2 = str_len(str2);
    int totalLength = len1 + len2;
    
    char *result = (char *)malloc(totalLength + 1);
    
    for (int i = 0; i < len1; i++) {
        result[i] = str1[i];
    }
    
    for (int i = 0; i < len2; i++) {
        result[len1 + i] = str2[i];
    }
    
    result[totalLength] = '\0';
    
    return result;
}

int main() {
    const char *string1 = "Hello, ";
    const char *string2 = "World!";
    
    char *concatenatedString = concatStrings(string1, string2);
    
    printf("Concatenated String: %s\n", concatenatedString); 
    
    free(concatenatedString);
    
    return 0;
}