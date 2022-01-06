#include<stdio.h>
#include<string.h>
char *reverse();
void main()
{
char s[10];
strcpy(s,reverse());
printf("string = %s",s);
}
char *reverse()
{
static char st[10]="savita";
strrev(st);
return st;
}
