#include<stdio.h>

main(){
	int x , y ,ans;
	printf("X :-");
	scanf("%d",&x);
	printf("Y :-");
	scanf("%d",&y);
	
	ans = x * x - 2 * (x * y) - y * y;
	
	printf("(x-y)^2 = %d",ans);
}
