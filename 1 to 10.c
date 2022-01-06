#include<stdio.h>
void main()
{
	int a=1;
start:
if(a<=10)
printf("%d\n",a);
a++;
goto start;
}

