#include<stdio.h>

int main(){
    int a,b,c;
    printf("\nenter any three digit number");
    scanf("%d",&a);
    b=a%100;
    c=b%10;
    printf("the ones digit value is %d",c);
    return 0;

}
