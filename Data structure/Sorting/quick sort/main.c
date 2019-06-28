#include<stdio.h>
void quick_sort(int[],int,int);
int arr[30];
void main()
{int left,right,i,n;

 printf("enter the size=");
 scanf("%d",&n);
   printf("Enter the elements:\n");
  for(i=0;i<n;i++)
  scanf("%d",&arr[i]);

 left=0;
 right=n-1;
 quick_sort(arr,left,right);

 for(i=0;i<n;i++)
 printf("%d\t",arr[i]);
}
void quick_sort(int a[],int LB,int UB)
{
int pivot,left,right,pivotl;
left=LB;
right=UB;
pivot=a[left];

while(LB<UB)
{
 while(pivot<=a[UB] && LB<UB)
   UB--;

  if(LB!=UB)
  {
   a[LB]=a[UB];
   LB++;
  }

 while(pivot>=a[LB] && LB<UB)
 LB++;

   if(LB!=UB)
  {
   a[UB]=a[LB];
   UB--;
  }

}
a[LB]=pivot;
pivotl=LB;
if(left<pivotl)
    quick_sort(arr,left,pivotl-1);
if(right>pivotl)
    quick_sort(arr,pivotl+1,right);
}
