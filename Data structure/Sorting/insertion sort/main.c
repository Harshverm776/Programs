#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,a[100],k,temp;
 printf(" enter the size of array:");
  scanf("%d",&n);
 printf(" enter the elements of the array:\n");

for(i=0;i<n;i++)
 scanf("%d",&a[i]);

 for(k=0;k<n-1;k++)
 if(a[k]>a[k+1])
     {   temp=a[k];           //swapping
         a[k]=a[k+1];
         a[k+1]=temp;

        for(i=k;i>0;i--)
         {   if(a[i]<a[i-1])
             {   temp=a[i];
                 a[i]=a[i-1];
                 a[i-1]=temp;
             }
             else
               break;
         }
     }
printf(" after sorting :\n");
 for(i=0;i<n;i++)
  printf("%d\t",a[i]);

return 0;
}
