#include<stdio.h>
#include<stdlib.h>
//#include<calloc.h>
void main()
{
int **p,rs,cs,r,c;
printf("enter rs and cs\n");
scanf("%d %d",&rs,&cs);
p=(int**)calloc(rs,sizeof(int*));
for(r=0;r<rs;r++)
p[r]=(int*)calloc(cs,sizeof(int));

printf("enter array elements\n");
for(r=0;r<rs;r++)
{for(c=0;c<cs;c++)
scanf("%d",&p[r][c]);
}
for(r=0;r<rs;r++)
{for(c=0;c<cs;c++)
	printf("%4d",p[r][c]);
	}
	
	printf("\nele %d ",p[2][1]);	
}
