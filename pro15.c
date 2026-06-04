#include<stdio.h>

int main(){
    int a,b,c;
    printf("\nenter any two digit number");
    scanf("%d",&a);
    b=a/10;
    c=b*10;
    printf("after changing ones digit of the two digits as zero then it become %d",c);
    return 0;

}
