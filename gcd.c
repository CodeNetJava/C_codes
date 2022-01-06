#include<stdio.h>
main()
{
	int a,b,t,g;
	scanf("%d%d",&a ,&b);
	if(a<b)
	{
		t=a;
		a=b;
		b=t;
	}
	printf("gcd of %d,%d is\n",a ,b);
	while(!(b==0))
	{
		g=a%b;
		a=b;
		b=g;
		
		
	}
	printf("%d",a);
}
	
	
	
