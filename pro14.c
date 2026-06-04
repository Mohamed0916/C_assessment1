#include<stdio.h>

int main(){
    int a,b,c,d,e;
    printf("\nenter any four digit number");
    scanf("%d",&a);
    b=a/1000;
    c=((a%1000)/100);
    d=(((a%1000)%100)/10);
    e=(((a%1000)%100)%10);
    printf("reverse of the first two digit of three digits is %d%d%d%d",b,c,e,d);
    return 0;

}
