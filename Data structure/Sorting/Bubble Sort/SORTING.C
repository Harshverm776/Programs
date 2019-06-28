#include<stdio.h>
void main()
{int n,i,a[100],j,k,temp;
clrscr(0);
printf(" enter the no. of elements \n");
scanf("%d",&n);
printf(" enter the elements of the array\n");
for(i=0;i<n;i++)
{printf("a[%d]=",i);
 scanf("%d",&a[i]);
 }
 for(i=5;i>1;i--)
 { for(j=0;j<i-1;j++)
  {if(a[j]>a[j+1])
   {temp=a[j+1];
   a[j+1]=a[j];
   a[j]=temp;
   }
  }
 }
  printf(" after sorting the new array is\n");
 for(i=0;i<n;i++)
 {printf("a[%d]=%d\n",i,a[i]);
 }
getch();
}