#include <stdio.h>

void reverseString(char *str) {
    if (*str == '\0') {
        return; 
    } else {
        reverseString(str + 1); 
        printf("%c", *str); 
    }
}

int main() {
    char str[100];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    printf("Reversed sentence: ");
    reverseString(str);
    printf("\n");

    return 0;
}
