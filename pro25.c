#include<stdio.h>

int main(){
        int a,b;
        printf("\nenter a two digit number:");
        scanf("%d", &a);
        b=((a/10)%10)+(a%10);
        printf("Result: %02d",b);
        return 0;
}
