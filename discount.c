#include<stdio.h>
#include<math.h>
void main()
{   char n[20],i[20];
    float q,r,a,d,net;
	printf("name id qnty rate\n");
	scanf("%s%s%f%f",n,i,&q,&r);
	a=q*r;
	d=q*30/100;
	net=q-d;
	printf("amount %f\ndiscount %f\nnet bill %.2f\n",a,d,net);
}
