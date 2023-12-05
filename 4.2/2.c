#include<stdio.h>

main(){
	int a = 10,b = 5;
	
	printf("%d \n",a);
	printf("%d",b);
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("\n\n%d \n",a);
	printf("%d",b); 
}
