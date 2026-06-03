#include<stdio.h>

int main(){
    int a,b,c,d,sum;
    printf("\nenter any three digit number");
    scanf("%d",&a);
    b=a/100;
    c=((a%100)/10);
    d=((a%100)%10);
    sum=b+c+d;
    printf("sum of the three digits is %d",sum);
    return 0;

}
