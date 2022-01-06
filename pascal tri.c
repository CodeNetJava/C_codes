#include<stdio.h>
void pasc(int a);
void main()
{
int n;
printf("enter value\n");
scanf("%d",&n);
pasc(n);
}
void pasc(int a)
{
	int r,s,c,b=0;
	for(r=0;r<a;r++)
	{
		for(s=0;s<=a-r;s++)
		printf("  ");
		for(c=0;c<=r;c++)
		{
			if(c==0||c==r)
			b=1;
			else
			b=b*(r-c+1)/c;
			printf("%4d",b);
		}printf("\n");
	}
}

