#include<stdio.h>
void main()
{ int i,j,a[5][5],sum=0;
 printf(" enter the no. of elements of 5*5 matric :ss\n");
 for(i=0;i<5;i++)
  { for(j=0;j<5;j++)
	{ printf("a[%d][%d]=",i,j);
	  scanf("%d",&a[i][j]);
    }
  }
for(i=0;i<5;i++)
  { for(j=0;j<5;j++)
    { if(i==j)
		sum=sum+a[i][j];
    }
  }
for(i=0;i<5;i++)
  { for(j=0;j<5;j++)
	{ printf("%d\t",a[i][j]);
    }printf("\n");
  }
printf(" the  sum of diagonal elements are %d \n",sum);
}
