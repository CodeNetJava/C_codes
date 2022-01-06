#include<stdio.h>
int good (int);
int fact(int);
int main()
{	int p;
	printf("enter no\n");
	scanf("%d",&p);
	if(good(p)==1)
	printf("strong no\n");
	else
	printf("not strong no\n");
	}

int good(int n)
{
int x,m,s=0;
for(m=n;m!=0;m=m/10){

	x=m%10;
    s=s+fact(x);
	}

	if(n==s)
	return 1;
	else
	return 0;
}

int fact(int y)
{
	int f=1;
	while (y!=0)
	f=f*y--;

	return f;
}
