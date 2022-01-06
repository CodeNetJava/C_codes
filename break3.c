#include<stdio.h>
main()
{
int m;
int i;
char p, c='\n';
int flag=0;
scanf("%d",&m);
for(i=0;(i<m)&&(flag!=1);i=i+1)
{
	p=c;
	scanf("%c",&c);
	if((c=='\n')&&(p=='\n'))
	{
		flag=1;
	}
	}
	printf("%d\n",i);
}
