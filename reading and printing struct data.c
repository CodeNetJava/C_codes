#include<stdio.h>
#include<string.h>
void main()
{
struct bank
{
 int acc;
 char name[20];
 float bal;
};
struct bank b;
scanf("enter acc\t name\t bal\t");
 printf("stru size = %d\n",sizeof(b));
 printf("acc        %d\n",b.acc);
 printf("name       %s\n",b.name);
 printf("bal       %f\n",b.bal);
}
