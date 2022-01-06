#include<stdio.h>
int main()
{
	int m,i ;
	char curr='\0', prev;
	printf("enter limit of char");
	scanf("%d",&m);
	getchar();
	for(i=0;i<m;i++)
	{
	 prev=curr;
	 curr=getchar();
	 if((curr=='\n' ) || (prev=='\n'))
	 {break;
	 }
	 
	 
	 
 	
	} printf("/n%d",i);
}
