#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter a number: ");
    scanf("%d", &a);
    b=((a/10)%10);
    c=a-(b%2)*5;
    printf("Result = %d", c);
    return 0;
}
