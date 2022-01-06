#include<stdio.h>
#include<string.h>
 union stu
 {
   int id;
   char name[20];
   float fee;

}s;
void main()
{
    printf("union size = %d bytes\n\n",sizeof(s));
}

