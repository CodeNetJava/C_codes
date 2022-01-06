#include<stdio.h>
void sqr(int a);
int main()
{
int a=10;
printf("before fun %d\n",a);
sqr(a);
printf("after fun %d\n\n",a);

}
void sqr(int a)
{
    a=a*a;
}//a is deleted after axecution
