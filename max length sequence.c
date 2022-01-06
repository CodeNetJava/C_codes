#include<stdio.h>
void main()
{
	int p,c,m=1,l=1;
	printf("enter sequence");
	scanf("%d",&p);
	if(p!=-1)
	{
		l=1;
		m=1;
			
		scanf("%d",&c);
		while(c!=-1)
		{
			if(c>p)
			{
				l=l+1;
			}
			else{
			l=1;
			}
			if(l>m)
			{
				m=l;
			}
			p=c;
			scanf("%d",&c);
			
		}
		printf(" m= %d",m);
	}
	
}
