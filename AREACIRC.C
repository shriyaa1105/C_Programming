#include<stdio.h>
#include<conio.h>
void main()
{
int r,area,perimeter;
clrscr();
printf("enter the radius of circle\n");
scanf("%d",&r);
area=(22*r*r)/7;
printf("\nthe area of circle is %d",area);
perimeter=(2*22*r)/7;
printf("\nthe perimeter of circle is %d",perimeter);
getch();
}

