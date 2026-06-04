#include<stdio.h>

int main(){
    int a,b,c,d;
    printf("\nenter any three digit number");
    scanf("%d",&a);
    b=a/100;
    c=((a%100)/10);
    d=((a%100)%10);
    printf("reverse of the three digits is %d%d%d",d,c,b);
    return 0;

}
