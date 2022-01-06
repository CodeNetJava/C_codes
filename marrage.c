#include<stdio.h>
int main()
{
	char a;
	int b;
	printf("enter gender\n");
	scanf(" %c",&a);
	
	printf("enter age\n");
	scanf("%d",&b);
	
	
	if(a=='f'&& b>=18 || a=='m'&& b>=21)
	printf("eligible");
	else
	printf("not eligible");
}
