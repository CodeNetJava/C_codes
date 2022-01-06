#include<stdio.h>
int main()
{
	int a;
	int y,m,d;
	printf("enter age in days ");
	scanf("%d",&a);
	y=a/365;
	m=(a%365)/30;
	d=(a%365)%30;
	printf("year=%d\nmonth=%d\ndays=%d",y,m,d);
	
}
