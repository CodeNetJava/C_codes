#include<stdio.h>
int good (int);
int fact(int);
int main()
{	int p;
	printf("enter no");
	scanf("%d",&p);
	if(good(p)==1)
	printf("strong no");
	else if(good(p)==0)
	printf("not strong no");
	}

int good(int n)
{ 
int x,s;
while(n!=0){
	
	x=n%10;
	s=s+fact(x);
	n=n/10;}
	
	if(s==n)
	return 1;
	else
	return 0;
}

int fact(int y)
{
	int i,f;
	f=1;
	for(i=y;i>y;i--)
	f=f*y;
	return f;
}

