#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,s,i;
	printf("array size\n");
	scanf("%d",&s);
	
	p=(int*)calloc(s,sizeof(int));          //1
	printf("enter elements in array\n");       //2
	for(i=0;i<s;i++)                         //3
	scanf("%d",p+i);                         //4    1+2+3+4 = array is created
	
	printf("array\n");
	for(i=0; i<s;i++)
	printf("%4d",*(p+i));
	
	free(p);
	p=NULL;
	}
