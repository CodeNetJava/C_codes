#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
enum colours
{
    black,brown,red,green,blue,orange,white
};
void main()
{
    enum colours color=green;
    textcolor(color);
    textbackground(1);
    cprintf("sau shinde");
}
