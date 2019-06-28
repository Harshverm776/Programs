#include<stdio.h>
void main()
{ int i,j,a[3][3],b[3][3],c[3][3],item;
printf(" enter the elements of the array1\n");
for(i=0;i<3;i++)
{  for(j=0;j<3;j++)
	{ printf("a[%d][%d]=",i,j);
	scanf("%d",&a[i][j]);
	}
}
printf(" enter the elements of the array2 \n");
for(i=0;i<3;i++)
{  for(j=0;j<3;j++)
	{ printf("a[%d][%d]=",i,j);
	scanf("%d",&a[i][j]);
	}
}
printf("enter your choose:\n 1: for additon \n 2: for subtraction \n");
scanf("%d",&item);
switch(item)
{
case 1:
	for(i=0;i<3;i++)
	{  for(j=0;j<3;j++)
		{ c[i][j]=a[i][j]+a[i][j];
		}
	}
	printf(" the addition of array1 and array 2is:\n");
	for(i=0;i<3;i++)
	{  for(j=0;j<3;j++)
		{ printf("c[%d][%d]=%d",i,j,c[i][j]);
		}
	}
break;
case 2:
	for(i=0;i<3;i++)
	{  for(j=0;j<3;j++)
		{ c[i][j]=a[i][j]-a[i][j];
		}
	}
	printf(" the subtraction of array1 and array 2is:\n");
	for(i=0;i<3;i++)
	{  for(j=0;j<3;j++)
		{ printf("c[%d][%d]=%d\n",i,j,c[i][j]);
		}
	}
break;
default:
printf(" type correct option\n");
break;
}
}
