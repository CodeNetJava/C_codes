#include<stdio.h>

int power(int b, int p);
int main()
{
int b,p;
printf("enter b and p\n");
scanf("%d   %d",&b,&p);
printf("power is %d",power(b,p));
}

int power( int b, int p)
{
if(p!=0) return b*power(b,p-1);
else
return 1;
}
