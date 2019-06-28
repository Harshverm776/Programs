#include<stdio.h>
void quickSort(int[],int,int);
int partition(int[],int,int);
void quickSort(int a[], int p,int r)
{
	int q,i;
	if(p<r)
	{
		printf("p=%d r=%d\n",p,r);
		for(i=p;i<=r;i++)
		printf("%d  ",a[i]);
		q=partition(a,p,r);
		
		printf("q=  %d   \n",q);
		printf("p=%d q=%d\n",p,q-1);
		for(i=p;i<=q-1;i++)
		printf("%d  ",a[i]);
	 quickSort(a,p,q-1);
	 
	 printf("q=%d r=%d\n",q+1,r);
		for(i=q+1;i<=r;i++)
		printf("%d  ",a[i]);
		printf("\n");
	 quickSort(a,q+1,r);
	}
}
int partition(int a[],int p,int r)
{
	int x,i,j,temp;
	x=a[r];
	i=p-1;
	for(j=p;j<=r-1;j++)
	{ if(a[j]<=x)
		{ i=i+1;
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	i=i+1;
	temp=a[i];
	a[i]=a[r];
	a[r]=temp;
	return i;
}
void main()
{
	int i,num,a[20];
	printf("Enter the size of array:\n");
	scanf("%d",&num);
	printf("enter the elements :\n");
	for(i=0;i<num;i++)
		scanf("%d",&a[i]);
	quickSort(a,0,num-1);
	printf(" sorted array using quick Sort:\n");
	for(i=0;i<num;i++)
	printf("%d ",a[i]);
}