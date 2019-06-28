#include<stdio.h>
#include<conio.h>
int factorial(int num)
{ int i,n=1;
 for(i=1;i<=num;i++)
 { n=n*i;
 }
 return(n);
}
void main()
{ int i,j,k,l,num,n,p;
clrscr();
printf(" Enter the no. of rows\n");
scanf("%d",&num);
for(i=1;i<=num;i++)
 { for( j=num-1;j>=i;j--)
   {printf(" ");
   }
     for(l=0;l<=i-1;l++)
     {p=factorial(i-1)/factorial(i-1-l)*factorial(l);
     printf("%d ",p);
     }
    printf("\n");
 }
getch();
}
