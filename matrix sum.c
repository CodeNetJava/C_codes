#include<stdio.h>
int main()
{
	int a,m,n,i=0,cs=0;
	printf("value of m & n");
	scanf("%d %d",&m,&n);
	while(i<m)
	{
		int rs=0;
		int j=0;
		
	while(j<n)
	{
		scanf("%d",&a);
		rs=rs+a;
		j++;
	}
	
	cs=cs+(rs*rs);
	i++;
	}
	printf("cs= %d",cs);
}
