#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,p,q,r,s,t;
	printf("enter two no ");
	scanf("%f %f",&a,&b);
	p=a+b;
	q=a-b;
	r=a*b;
	s=a/b;
	t=fmod(a,b);
	printf("sum %.2f\nsub %.2f\nmul %.2f\ndiv %.2f\nmod %.2f\n",p,q,r,s,t);
}
