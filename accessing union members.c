#include<stdio.h>
#include<string.h>
 union stu
 {
   int a;
   //char name[20];
   long int b;

};
void main()
{
    union stu s;
    s.a=100;
    printf("a = %d\n",s.a);
    s.b=200;
    printf("b = %d",s.b);
}

