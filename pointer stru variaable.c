#include<stdio.h>
float dummy(float a)
{
    float *p=&a;
}
struct book
{
     char author[20],name[20];
    float price;
}b,*p;
int  main()
{
    p=&b;
    printf("enter author name\n");
    gets((*p).author);

    printf("\nenter book name\n");
    gets((*p).name);

    printf("\nenter price\n");
    scanf("%f",&(*p).price);

    printf("\nauthor : %s\n",p->author);
    printf("\nbook : %s\n",p->name);
    printf("\nprice : %f\n",p->price);
}
