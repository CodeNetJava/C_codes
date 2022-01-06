#include<stdio.h>
void fun1();
void fun2();
int a=10;

int main()
{
a++;
fun1();
fun2();
}

void fun1()
{

 printf("a= %d\n",a++);
}
void fun2()
{
printf("a= %d\n",a++);
}
