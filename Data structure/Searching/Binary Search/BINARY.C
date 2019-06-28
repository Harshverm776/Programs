#include<stdio.h>
void main()
{int n,i,a[100],j,k,temp;
int beg,end,mid,item;
clrscr(0);
printf(" enter the no. of elements \n");
scanf("%d",&n);
printf(" enter the elements of the array\n");
for(i=0;i<n;i++)
{printf("a[%d]=",i);
 scanf("%d",&a[i]);
 }
 for(i=n;i>1;i--)
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
printf( " enter the element want to find \n");
scanf("%d",&item);
beg=0;
end=n-1;
mid=(beg+end)/2;
while( (beg<=end) && (a[mid]!=item) )
	{ if(item<a[mid])
		{ end=mid-1;
		}
	  else {beg=mid+1;
		}
mid=( beg+ end)/2;
	}
if(a[mid]==item)
	{  printf(" \n element found \n location of %d is %d \n",item,mid);
	}
else { printf(" element not found in the array\n");
	}
getch();
}