#include<stdio.h>
#include<conio.h>
void main()
{ int i,a[5][5],j;
clrscr();
for(i=0;i<5;i++)
 { for(j=0;j<5;j++)
   { if(j>i)
    printf(" ");
    else
     { printf("%d",j+1);
     }
   }printf("\n");
 }
getch();
}