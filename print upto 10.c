#include<stdio.h>
void main()
{
	int a=1;
	start:
	printf("%d\n",a);
	a++;
	if(a<=10)
	goto start;
}
