#include<stdio.h>
int fact(int);
int main()
{
int n;
printf("enter a no\n");
scanf("%d",&n);
printf("factorial = %d",fact(n));



}
 int fact(int a)
 {
 if(a!=0)
 return a*fact(a-1);
 else
    return 1;

 }
