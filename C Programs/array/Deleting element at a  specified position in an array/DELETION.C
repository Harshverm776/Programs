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
 printf(" enter the locations where you want to delete \n");
 scanf("%d",&k);
 for(i=k;i<n;i++)
 {a[i]=a[i+1];
 }
 p=a[k];
 n=n-1;
 printf(" after deletion the new array is\n");
 for(i=0;i<n;i++)
 {printf("a[%d]=%d\n",i,a[i]);
 }
getch();
}