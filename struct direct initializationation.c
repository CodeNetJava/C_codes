#include<stdio.h>
#include<string.h>
struct st
{
 int id;
 char name[20];
 float fee;
}s={1,"savita",100};
void main()
{
 printf("stru size = %d\n",sizeof(s));
 printf("id        %d\n",s.id);
 printf("name       %s\n",s.name);
 printf("fee       %f\n",s.fee);
}
