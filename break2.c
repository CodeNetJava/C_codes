#include<stdio.h>
main()
{
int max;
char p , c;
int i;
scanf("%d",&max);
getchar();
for(i=0;i<max;i++)
{
	p=c;
	c=getchar();
	if((c=='\n') || (p=='\n'))
	
		break;
	}
	printf("%d\n",i);
}
