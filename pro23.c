#include<stdio.h>

int main(){
	int a,b;
	printf("\nEnter a number:");
	scanf("%d", &a);
	b=(a/100)*100+(a%10);
	printf("Result:%d",b);
	return 0;
}
