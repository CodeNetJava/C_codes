#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct bill
{
char item[20];
float qty,price;
}b[100];

void main()
{
int i=0,c=1;
char op;
float amount,tot=0;

do{
//flushall();
printf("enter item name\n");
scanf(" %s",b[i].item);
printf("qty and prize\n");
scanf("%f %f",&b[i].qty,&b[i].price);
//flushall();
printf("next item\n");
scanf(" %c",&op);
if(op=='y')
{
    i++;c++;

}
    } while(op=='y');
    puts("\t\t\t bigbazaar");
    puts("                   ");
    printf("\t\t%s\t%s\t%s\t%s\n","item","qty","price","amount");
    puts("                            ");

    for(i=0;i<c;i++)
    {
        amount=b[i].qty*b[i].price;
        tot=tot+amount;
        printf("\t\t%s\t%.2f\t%.2f\t%.2f\n",b[i].item,b[i].qty,b[i].price,amount);
    }
    puts("                             ");
    printf("\t\t\ttotal amount = %.2f\n",tot);
    puts("\t\t\tthank you - visit again");
}

