#include<stdio.h>
int evenodd(int);
void main()
{
	int a;
	printf("enter no\n");
	scanf("%d",&a);
	if(evenodd(a))
		printf("odd");
    else
		printf("even");
	
}
int evenodd(int f)
{
	return(f%2);
}
