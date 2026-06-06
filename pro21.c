#include <stdio.h>

int main() {
    int a,b,c,d,e;
    printf("Enter a number: ");
    scanf("%d", &a);
    b=a-5;
    c=((b/100)%10);
    d=(b%10);
    e=b+((b%2)*(c%2)%2)*5;
    printf("Result = %d", e);
    return 0;
}
