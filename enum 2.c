#include<stdio.h>
enum week
{
    police=100,fire,hospital,ambu=200,ghar
};
void main()
{
    enum week n,e,h,g;


    h=police;
    e=fire;
    g=ambu;
    n=ghar;

    printf(" %d\n %d\n %d\n %d\n",h,e,g,n);
}
