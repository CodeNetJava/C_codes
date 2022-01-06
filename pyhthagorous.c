#include<stdio.h>
main()
{
	int count=0,n,c,pp,p,i;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		scanf("%d",&c);
		if(c<0)
		{continue;}
		if(count==0){
          pp=c;
          count=1;
		}
		else{
			if(count==1){
			p=c;
			count=2;
			}
		else{
			if(  pp*pp+p*p==c*c)
			{
				printf("%d %d %d\n",pp,p,c);}
				pp=p;
				p=c;
			}
		}
	
	}
}


