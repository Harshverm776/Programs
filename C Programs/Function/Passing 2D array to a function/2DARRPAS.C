#include<stdio.h>
#include<conio.h>
void func(int b[2][2]);  // [][2] || a[][2] || b[2][2]
void func(int b[2][2])
{ int i,j;
  for(i=0;i<2;i++)
   for(j=0;j<2;j++)
printf("%d\n",b[i][j]);
}
void main()
{int a[2][2]={1,2,11,22};
 clrscr();
  func(a);

 getch();
}