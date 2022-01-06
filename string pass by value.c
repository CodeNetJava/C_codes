#include<stdio.h>
#include<string.h>
void reverse(char a[10] );
int main()
{
char a[10];
scanf("%s",a);
printf("string = %s\n",a);
reverse(a);
printf("reverse string = %s\n",a);
}
void reverse(char b[10])
{
strrev(b);
}
