#include<stdio.h>
void sq(int *a);
void main()
{
int a=10;
printf("before fun %d\n",a);
sq(&a);
printf("after fun %d\n\n",a);

}

 void sq(int *a)
{
    *a = *a * *a;
}
