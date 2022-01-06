#include<stdio.h>
void fun1();
void fun2();
int main()
{

fun1();
fun2();
}

void fun1()
{
 extern int a;
 printf("a= %d\n",a);
}
void fun2()
{
printf("a= %d\n",a);
}

