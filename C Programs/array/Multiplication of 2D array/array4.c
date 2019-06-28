#include<stdio.h>
void main()
{ int i,j,k,a[3][3],b[3][3],c[3][3];
printf(" enter the elements of the array1\n");
for(i=0;i<3;i++)
{  for(k=0;k<3;k++)
	{ printf("a[%d][%d]=",i,k);
	scanf("%d",&a[i][k]);
	}
}
printf(" enter the elements of the array2 \n");
for(k=0;k<3;k++)
{  for(j=0;j<3;j++)
	{ printf("b[%d][%d]=",k,j);
	scanf("%d",&a[k][j]);
	}

}
c[i][j]=0;
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
	{for(k=0;k<3;k++)
		c[i][j]=c[i][j]+a[i][k]*b[k][j];
         }
}
printf(" the multiplication of arrys are:\n");
for(i=0;i<3;i++)
	{  for(j=0;j<3;j++)
		{ printf("%d",c[i][j]);
		printf("\t");
		}printf("\n");
	}

}
