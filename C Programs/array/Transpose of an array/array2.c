#include<stdio.h>
void main()
{ int i,j,a[3][3],b[3][3];
printf(" enter the elements of the array\n");
for(i=0;i<3;i++)
{  for(j=0;j<3;j++)
	{ printf("a[%d][%d]=",i,j);
	scanf("%d",&a[i][j]);
	}
}
for(i=0;i<3;i++)
{  for(j=0;j<3;j++)
	{ b[j][i]=a[i][j];
	}
}
printf(" the transpose of array is:\n");
for(i=0;i<3;i++)
	{  for(j=0;j<3;j++)
		{ printf("b[%d][%d]=%d\n",i,j,b[i][j]);
		}
	}
}
