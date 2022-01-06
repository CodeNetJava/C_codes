#include<stdio.h>
main()
{
	int a,s;
	s=0;
 scanf("%d",&a);
 while(!(a==-1))
 {
s=s+a;
scanf("%d",&a);

}
printf("sum=");
 printf("%d",s);
}
