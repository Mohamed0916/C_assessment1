#include<stdio.h>

int main(){
	int a,b,c;
	printf("\nEnter any two digit number:");
	scanf("%d",&a);
	b=a%10;
	c=a/10;
	printf("the reverse of the two digit is %d%d",b,c);
	return 0;
}
