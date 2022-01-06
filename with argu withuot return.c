#include<stdio.h>
void fabo(int);
int main()
{
	int n;
 printf("enter n value\n");
 scanf("%d",&n);
 fabo(n);
}
void fabo(int g)
{
int f1=0,f2=1,f3,i;
printf("fabo series\n");
printf("0  1");
	for(i=2;i<g;i++){

f3=f1+f2;
f1=f2;
f2=f3;
printf("%4d",f3);
}
}
