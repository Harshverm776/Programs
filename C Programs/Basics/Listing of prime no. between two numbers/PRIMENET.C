#include<stdio.h>
void main()
{int i,prime,upper,lower,n;
clrscr();
printf(" enter the lower and upper limit resp.\n");
scanf("%d%d",&lower,&upper);
printf(" prime no.s list is :\n");
for(n=lower; n<= upper;n++)
{prime=1;
  for(i=2;i<n;i++)
  if( n%i==0)
  { prime=0;
  break;
  }
  if( prime)
  printf("\t %d",n);
}
getch();
}