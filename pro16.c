#include<stdio.h>

int main(){
    int a,b,c;
    printf("\nenter any two digit number");
    scanf("%d",&a);
    b=a%10;
    c=b+10;
    printf("made tens digit as 1 then two digit no become %d",c);
    return 0;

}
