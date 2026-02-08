#include <stdio.h>

// recursive function to calculate a^b
int power(int a, int b) {
    if (b == 0)
        return 1;        
    else
        return a * power(a, b - 1);
}

int main() {
    int a, b;

    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    int result = power(a, b);

    printf("%d", result);

    return 0;
}
