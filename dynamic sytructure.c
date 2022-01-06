#include<stdio.h>
#include<stdlib.h>
struct stu
{
    int id;
    char name[20];
}s,*p;
void main()
{
    int c=1,i=0;
    char op;
    p=(struct stu*)calloc(c,sizeof(s));
    do
    {
        printf("enter\t stuid\tname\n");
        scanf("%d\t%s",&(p+i)->id,(p+i)->name);
        printf("next stu[y/n]\n");
        scanf(" %c",&op);
        if(op=='y')
        {
            i++;
            c++;}
            p=(struct stu*)realloc(p,c*sizeof(s));
        }while(op=='y');
    puts("id\tname\n");
    //puts("    ");
    for(i=0;i<c;i++)
        printf("%d\t%s\n",(p+i)->id,(p+i)->name);
    free(p);
    p= NULL;


}
