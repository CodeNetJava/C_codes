#include<stdio.h>
long fact(int);
int main()
{
	int n;
	printf("enter no\n");
	scanf("%d",&n);
	printf("factorial = %d",fact(n));
		
}
long fact(int r)
{	int f=1;
	while (r>=1)
	{

	f=f*r;
	r--;	
	}
	return f;
	
}


