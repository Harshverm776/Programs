#include<stdio.h>
#include<conio.h>
void func(int value)
{printf("%d\n",value);
}
void main()
{int i,a[5]={11,22,33,44,55};
 clrscr();
  for(i=0;i<5;i++)
  func(a[i]);

 getch();
}