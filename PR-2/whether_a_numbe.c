#include<stdio.h>
main()
{
	int num;
	printf("Enter the any value : - ");
	scanf("%d",&num);
	
	if(num %2 == 0) //even number condition 
	               // odd number condition (num %2 == 1);
	{
		printf("Even Number");	
	}else{
		printf("Odd number");
	}
	return 0;	
}
