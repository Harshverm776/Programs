#include<stdio.h>
void main()
{ int n,i,s;
printf(" type the no. ");
scanf("%d",&n);
for(i=2;i<=n-1; i++)
 {     if (n%i==0)
      {printf(" it is composite");
	break;
      }
 }
for(i=2;i<=n-1; i++)
{  if (n%i!=0)
	{printf(" it is prime");
      		break;
	}
}
}

