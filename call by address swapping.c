#include<stdio.h>
void swap( int *a,int *b);
int main()
{
    int a=10,b=20;
    printf("before fun call  a=%d  b=%d\n",a,b);
    swap(&a,&b);
    printf("after fun call a=%d  b=%d\n",a,b);

}

void swap(int *a,int *b)
{
 int t;
 t=*a;
 *a=*b;
 *b=t;
}

