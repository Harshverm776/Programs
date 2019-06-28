#include<stdio.h>
void main()
{int n,i,a[100],p,k;
clrscr();
printf(" enter the no. of elements \n");
scanf("%d",&n);
printf(" enter the elements of the array\n");
for(i=0;i<n;i++)
{printf("a[%d]=",i);
 scanf("%d",&a[i]);
 }
 printf("enter the element you want to insert\n");
 scanf("%d",&p);
 printf(" enter the locations \n");
 scanf("%d",&k);
 for(i=n;i>=k;i--)
 {a[i+1]=a[i];
 }
 a[k]=p;
 n=n+1;
 printf(" after insertion the new array is\n");
 for(i=0;i<n;i++)
 {printf("a[%d]=%d\n",i,a[i]);
 }
getch();
}