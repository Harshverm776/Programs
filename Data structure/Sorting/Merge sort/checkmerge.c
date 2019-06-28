#include<stdio.h>
int A[20];
void merge(int[],int ,int ,int);
void MergeSort(int A[],int p,int r)
{
	int q,i;
	if(p<r)
	{
	 q=(p+r)/2;
	 printf("p = %d q = %d \n",p,q);
	 for(i=p;i<=q;i++)
	 printf("%d  ",A[i]);
	MergeSort(A,p,q);
	 printf("q = %d r = %d \n",q+1,r);
	 for(i=q+1;i<=r;i++)
	 printf("%d  ",A[i]);
	MergeSort(A,q+1,r);
	printf("merge call q=%d \n",q);
	 printf("p = %d q = %d r =%d \n",p,q,r);
	merge(A,p,q,r);
	 for(i=p;i<=r;i++)
	 printf("%d  ",A[i]);
	}
}
void merge(int A[],int p,int q,int r)
{
	int n1,n2,i,j,L[20],R[20],k;
	n1=q-p+1;
	n2=r-q;
	for(i=0;i<n1;i++)
		L[i]=A[i+p];
	for(j=0;j<n2;j++)
		R[j]=A[q+j+1];
	L[n1]=100;
	R[n2]=100;
	i=0;j=0;
	for(k=p;k<=r;k++)
	{	if(L[i]<=R[j])
		{ A[k]=L[i];
		 i=i+1;
		}
		else
		{A[k]=R[j];
		j=j+1;
		}
	}
}
void main()
{
	int num,i;
	printf("enter the size of array:");
	scanf("%d",&num);
	printf("enter the elements\n");
	for(i=0;i<num;i++)
		scanf("%d ",&A[i]);
	MergeSort(A,0,num-1);

	printf(" After merge sort: ");
	for(i=0;i<num;i++)
		printf("%d ",A[i]);
}