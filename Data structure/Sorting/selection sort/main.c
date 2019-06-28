#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[15],m,l,temp,i,j,n;
	printf("size=");
	scanf("%d",&n);
	       for(i=0;i<n;i++)
	       {
	       	printf("a[%d]=",i);
	       	scanf("%d",&a[i]);
	       }
	printf("\n");
	for(j=0;j<n-1;j++)
	{
	    m=j;
        for(i=j+1;i<n;i++)
        if(a[m]>a[i])
         m=i;
    temp=a[j];
    a[j]=a[m];
	a[m]=temp;
	}
	for(i=0;i<n;i++)
	printf("a[%d]=%d\n",i,a[i]);

    return 0;
}
