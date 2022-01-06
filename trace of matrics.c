#include<stdio.h>
int main()
{
	int i,j,n;
	float a,trace=0;
	printf("enter size of matric");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%f",&a);
			if(i==j)
			{
		    trace=trace+a;
		}
		}
	}
	printf("trace = %f",trace);
}
