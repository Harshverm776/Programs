#include<stdio.h>
#include<conio.h>
void main()
{ int i,j,k,n,x=0;
 clrscr();
 printf("\n\n");
 for(i=1;i<=4;i++)
 {for(j=3;j>=i;j--)
   {printf(" ");
   }
  n=i+x;
  x=i;
  if(n<=7)
  {for(k=1;k<=n;k++)
   {printf("*");
   }
  }
 printf("\n");
 }
getch();
}