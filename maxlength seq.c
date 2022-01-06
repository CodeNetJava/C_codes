#include<stdio.h>
main()
{
	int p,c,l=0,ml=0;
	scanf("%d",p);
	if(p!=-1){
		l=1;
		ml=1;
		scanf("%d",c);
		while(c!=-1)
		{
			if(p<c)
			{
				l=l+1;
			}
			else{
				if(ml<l)
				{ml=l;
				}
				l=1;
			}
			p=c;
			scanf("%d",&c);
		}
		if(ml<l)
{ml=l;}	}

}
