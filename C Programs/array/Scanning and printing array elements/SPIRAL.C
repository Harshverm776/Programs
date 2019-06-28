#include<stdio.h>
#include<conio.h>
void main()
{int i,j,a[5][4];
clrscr();
printf("type the elements of the array[5][4]:\n");
for(i=0;i<5;i++)
 {for(j=0;j<4;j++)
   {printf("a[%d][%d]=");
   scanf("%d",&a[i][j]);
   }
 }
printf(" array is:\n");
for(i=0;i<5;i++)
 { for(j=0;j<4;j++)
   {printf("%d\t",a[i][j]);
   }printf("\n");
 }
getch();
}