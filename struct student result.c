#include<stdio.h>
#include<string.h>
struct
{
int id , marks[6];
char name[20],dob[20];
}s;

void main()
{
int i,flag=1;
char sub[6][10]={"tel","eng","hin","mat","sci","sco"};
printf("enter student\n id\tname\tdob\n");
scanf("%d\t%s\t%s",&s.id,s.name,s.dob);

for(i=0;i<6;i++){
printf("marks in %s\t",sub[i]);
scanf("%d",&s.marks[i]);
}

puts("\t\t board of sec education");
puts("                           ");
printf("id : %d\n",s.id);
printf("name : %s\n",s.name);
printf("dob : %s\n",s.dob);
puts("                  ");
puts("subject\tmarks\tpass\tfail");
puts("                  ");
for(i=0;i<6;i++)
{
    printf("%s :\t%d",sub[i],s.marks[i]);
    if(s.marks[i]>=35)
        puts("p");
    else
    {
        puts("f");
    }flag=0;
}
puts("                  ");
printf("result: ");
if (flag==1)printf("pass");
else printf("fail");
}
