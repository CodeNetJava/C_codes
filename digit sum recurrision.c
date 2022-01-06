#include<stdio.h>
int sum(int);
int s=0;
int main()
{
int a;
printf("enter no \n");
scanf("%d",&a);
printf("digits sum = %d ",sum(a));
}

int sum(int n)
{

if(n!=0)
{
s=s+(n%10);
sum(n/10);
}
return s;

}
