#include<stdio.h>
//#include<string.h>

 union stu
 {
   int id;
   char name[20];
   float fee;
} s={530,"savita",439};
void main()
{
    printf("id = %d\nname = %s\nfee = %f",s.id,s.name,s.fee);
}
