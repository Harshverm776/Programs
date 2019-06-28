#include<stdio.h>
#include<conio.h>
void func(int *p)
{ int i;
  for(i=0;i<5;i++)
{printf("%d\n",*(p+i));
}
}
void main()
{int a[5]={11,22,33,44,55};
 clrscr();
  func(a);

 getch();
}