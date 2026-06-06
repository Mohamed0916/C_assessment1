#include<stdio.h>

int main(){
	int a,b;
	printf("\nenter a four digit number:");
	scanf("%d", &a);
	b=((a/1000)*100)+(((a/100)%10)*1000)+(((a/10)%10)*10)+(a%10);
	printf("Result: %04d",b);
	return 0;
}
