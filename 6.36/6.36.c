#include <stdio.h>
#include <stdlib.h>

void stringReverse(const char *str) {
    if (*str == '\0') {
        return;
    }
    stringReverse(str + 1);
    putchar(*str);
}

int main() {
    char str[] = "Hello, World!";
    printf("Original string: %s\n", str);
    printf("Reversed string: ");
    stringReverse(str);
    printf("\n");
    system("pause");
    return 0;
}


