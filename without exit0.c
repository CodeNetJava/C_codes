#include<stdio.h> 
#include<conio.h> //or "process.h" or <stdlib.h>
int main()
{
	    goto a;
	c:
		printf("3\n");
		goto last;
	b:
		printf("2\n");
		goto c;
	a:
		printf("1\n");
		goto b;
		last:
			getch();
}
