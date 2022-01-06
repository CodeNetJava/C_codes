#include<stdio.h>
int groot();
int main()
{
	printf("groot =%d ", groot());
}
int groot()
{
	int n,s=0;
	printf("enter no\n");
	scanf("%d",&n);
	while(n>9)
	{

	while(n!=0){

	 s=s+n%10;
	 n=n/10;

	 }

	n=s;
	s=0;
}

	return n;
}
