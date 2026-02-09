#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length;

    // input string
    scanf("%s", str);

    length = strlen(str);

    // reverse the string
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}
