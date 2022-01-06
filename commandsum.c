#include<stdio.h>
#include<stdlib.h>
void main(int argc, char *argv[])
{
int i,s=0;
for(i=0;i<argc;i++)
    s=s+atoi(argv[i]);
printf("sum = %d ",s);
}

