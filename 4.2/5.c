#include<stdio.h>

main(){
	int x , y ,ans;
	printf("X :-");
	scanf("%d",&x);
	printf("Y :-");
	scanf("%d",&y);
	
	ans = x * x * x + 3 * ((x * x) * y) + 3 * ( x * (y * y)) + y * y * y ;
	
	printf("(x + y)^3 = %d",ans);
}
