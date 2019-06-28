#include<stdio.h>
 int heapsize;
 void MinHeapify(int A[], int i,int heapsize)
 {
	int l,r,smallest,temp;
	l=2*i+1;
	r=2*i+2;
	if(l<=heapsize-1 && A[l]<A[i])
	 smallest=l;
	else
	 smallest=i;
	if(r<=heapsize-1 && A[r]<A[smallest])
	 smallest=r;
	if(smallest!=i)
	 {
		temp=A[i];
		A[i]=A[smallest];
		A[smallest]=temp;

	 MinHeapify(A,smallest,heapsize);
 }  }
 void BuildMHeap(int A[],int heapsize)
 {
	int i;
	for(i=(heapsize/2)-1;i>=0;i--)
	 MinHeapify(A,i,heapsize);
 }
  int extractmin(int A[],int n)
 {
 	int min;
     min=A[0];
     A[0]=A[n-1];
     n=n-1;
     MinHeapify(A,0,n);
     printf("minimum element is %d\n",min);
     return min;
     
 }
 void Insert( int A[],int n,int num)
 {
 	A[n]=num;
 	BuildMHeap(A,n);
 }
void optimal(int A[],int n)
{
     int sum=0, count= n;
     do{
	sum=sum+extractmin(A,n);
	if(count!=n)
	       Insert(A,n-1,sum);
	count--;
	n=n-1;
     }while(count!=0);
     printf("sum=%d",sum);
}

void main()
{
  int a[15],i,n;
  printf("Enter heap size:");
  scanf("%d",&n);
  printf("Enter the elements:\n");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  BuildMHeap(a,n);
  printf("MIN HEAP:\n");
  for(i=0;i<n;i++)
  printf("%d   ",a[i]);
  optimal(a,n);
}