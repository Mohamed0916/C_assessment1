#include <stdio.h>

int main() {
    int a,b,c,d,e;
    printf("Enter a number: ");
    scanf("%d", &a);
    b=a%10;
    c=a/10;
    d=b+c;
    e=a-(d%2)*5;
    printf("Result = %d", e);
    return 0;
}
