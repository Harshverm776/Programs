#include<stdio.h>
void main()
{int n,i,a[100],flag=0,k,index;
clrscr(0);
printf(" enter the no. of elements \n");
scanf("%d",&n);
printf(" enter the elements of the array\n");
for(i=0;i<n;i++)
{printf("a[%d]=",i);
 scanf("%d",&a[i]);
 }
 printf("enter the element you want to search:\n");
 scanf("%d",&k);
 for(i=0;i<n;i++)
 {if(k==a[i])
  {flag=1;
  index=i;
  }
 }
 if(flag==1)
 {printf(" search is successful \n element %d is present at index location %d in the array\n",k,index);
 }
 else{printf("unsuccessful search\n");
      }
getch();
}