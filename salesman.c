#include<stdio.h>
void main()
{	
	float da,s,comm,bonus,basic;
	char a[20];
	da=104/100;
	basic=5000;
	printf("enter name\n");
	scanf("%s",a);

	printf("enter sales\n");
	scanf("%f",&s);

	if(s>=100000)
	{
		comm=s*10/100;
		bonus=500;
	}
	else
	{
		comm=s*5/100;
		bonus=200;
	}
	printf("total= %f\n ",comm+bonus+basic+da);
}
	
	
