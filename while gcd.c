#include<stdio.h>
int main()
{
	int a,b,g,t;
	scanf(" %d %d",&a,&b);
	
	if (a<b)
	{
		t=a;
		a=b;
		b=t;
	}
		printf("gcd of %d,%d is",a,b);
	while(!(b==0))
	{
		g=a%b;
		a=b;
		b=g;
	}
	printf(" \n %d ",a);
} 
