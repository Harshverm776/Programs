#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[15],min_index,temp,i,j,n;
	printf("size=");
	scanf("%d",&n);
	       for(i=0;i<n;i++)
	       {
	       	printf("a[%d]=",i);
	       	scanf("%d",&a[i]);
	       }
	printf("\n");
	for(j=0;j<n-1;j++)
	{min_index=j;
	temp=a[j];
	for(i=j+1;i<n;i++)
	{ if(a[min_index]>a[i])
		 min_index=i;
    }
	a[j]=a[min_index];
	a[min_index]=temp;
	}

	for(i=0;i<n;i++)
	printf("a[%d]=%d\n",i,a[i]);

    return 0;
}
