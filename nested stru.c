#include<stdio.h>
#include<string.h>
 struct stu
 {
   int id;
   char name[20];
 };
 struct jdate
 {
   struct stu s;
  char jd[20];
 }j;
 void main()
 {
     printf("enter student\n\tid\tname\tjoin date\n");
     scanf("%d %s %s",&j.s.id,j.s.name,j.jd);

     printf("id %d\n",j.s.id);
     printf("name %s\n",j.s.name);
     printf("joindate %s\n",j.jd);
 }
