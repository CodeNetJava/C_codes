#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,i,s,s1;
	printf("enter size of array\n");
	scanf("%d",&s);
	p=(int*)calloc(s,sizeof(int));
	printf("enter array elements\n");
	for(i=0;i<s;i++)
	scanf("%d",p+i);
	
	printf("array\n");
	for(i=0;i<s;i++)
	printf("%4d",*(p+i));
	
	printf("\nenter the no of cells to add\n");
	scanf("%d",&s1);
	p=(int*)realloc(p,(s+s1)*sizeof(int));
	printf("enter additional elements\n");
	for(i=s;i<s+s1;i++)
	scanf("%d",p+i);
	
	printf("array\n");
	for(i=0;i<s+s1;i++)
	printf("%4d",*(p+i));
	
	free(p);
	p=NULL;
	
}
