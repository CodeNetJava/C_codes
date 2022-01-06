#include<stdio.h>
#include<string.h>
 struct stu
 {
   int id;
   char name[20];
 };
 void show(struct stu s)
 {
   printf("id = %d\n",s.id);
     printf("name = %s\n",s.name);
 }
 void main()
 {
     struct stu st={101 ,"krish"};
     show(st);

 }
