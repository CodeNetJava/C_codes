#include<stdio.h>
int main()
{
	int n=3,a,c;
	for(c=0;c<=n;c++)
	{
		if(c==0||c==n)
			a=1;
		else
		a=a*(n-c+1)/c;
		printf("%4d",a);
		}
	printf("\n");
}
