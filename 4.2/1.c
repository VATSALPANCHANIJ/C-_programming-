#include<stdio.h>
main(){
	int a=5,b=10,c;
	
	printf("%d \n",a);
	printf("%d",b);
	
	c = a;
	a = b;
	b = c;
	
	printf("\n\n%d \n",a);
	printf("%d",b);
}
