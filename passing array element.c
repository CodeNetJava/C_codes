#include<stdio.h>
#include<string.h>
void change(int *a);
int main()
{
int a[10]={11,22,33,44,55,66};
change(a);
printf("%d",a[0]);
}
void change(int *a)
{
a[0]=100;
}
