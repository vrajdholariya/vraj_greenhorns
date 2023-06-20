// write c programme to find the third angel of triangle if two other angels are given.

#include<stdio.h>
#include<conio.h>

void main (){
int x,y,z;

clrscr();

printf("first angel :");
scanf("%d",&x);

printf("second angel:");
scanf("%d",&y);

z = 180 - (x+y);

printf("third angel %d",z);
getch();
}
