#include<stdio.h>
#include<conio.h>
void main()
{ int i,j,k,l,m;
 clrscr();
 printf("\n\n");
 for(i=1;i<=7;i++)
 { for(j=3;j>=i;j--)
   {printf(" ");
   }
   if(i<=4)
   { for(k=1;k<=i;k++)
     {printf("*");
     }
   printf("\n");
   }

   for(l=1;l<=i-4;l++)
   {printf(" ");
   }
   if(i>=5)
   { for(m=7;m>=i;m--)
     {printf("*");
     }
   printf("\n");
   }
 }
getch();
}