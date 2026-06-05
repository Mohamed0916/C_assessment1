#include <stdio.h>

int main() {
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);
    b=a-(a%2)*5;
    printf("Result = %d", b);
    return 0;
}
