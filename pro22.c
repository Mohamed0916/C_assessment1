#include <stdio.h>

int main() {
    int a,b,c,d,e,f,g,h,j,i,k;
    printf("Enter a number: ");
    scanf("%d",&a);
    b=((a/100)%10);
    c=((a/10)%10);
    d=a%10;
    e=b+c+d;
    if(e<10){
	    printf("Result = %d",e);
    }
    else if(e>10){
	    f=((e/10)%10);
    	    g=e%10;
            h=g+f;
	    if(h>=10){
		     i=((h/10)%10);
                     j=h%10;
                     k=i+j;
                     printf("Result = %d",k);
		     
	    }
	    else{
	        printf("Result = %d",h);
	    }
    }
    
    return 0;
}
