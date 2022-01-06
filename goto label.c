#include<stdio.h>
#include"stdlib.h"   //or "process.h" or <stdlib.h>
int main()
{
	    goto a;
	c:
		printf("3\n");
		exit(0);
	b:
		printf("2\n");
		goto c;
	a:
		printf("1\n");
		goto b;
}
