#include<stdio.h>

int main(){
    int a,b,c,d,e;
    printf("\nenter any three digit number");
    scanf("%d",&a);
    b=a/100;
    c=((a%100)/10);
    d=((a%100)%10);
    e=(d/d)*2;
    printf("after coverting ones digit to 2 in three digit no  %d%d%d",b,c,e);
    return 0;

}
