#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,a[100],j,temp;
 clrscr();
 printf(" enter the size of array:");
 scanf("%d",&n);
 printf(" enter the elements of the array:\n");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);

 for(i=n;i>1;i--)
 { for(j=0;j<i-1;j++)
  {if(a[j]>a[j+1])
   {temp=a[j+1];
   a[j+1]=a[j];
   a[j]=temp;
   }
  }
 }
  printf(" after sorting :\n");
 for(i=0;i<n;i++)
  printf("%d\n",a[i]);
getch();

}
