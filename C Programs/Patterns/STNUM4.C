#include<stdio.h>
#include<conio.h>
void main()
{ int i,j;
 clrscr();
 printf("\n\n");
 for(i=4;i>=1;i--)
 {for(j=1;j<=i;j++)
   {printf("%d ",j);
   }
   printf("\n");
 }
 printf("\n\n");
 for(i=1;i<=4;i++)
 {for(j=4;j>=i;j--)
   {printf("%d ",j);
   }
   printf("\n");
 }

getch();
}