#include<stdio.h>
void main()
{
int arr[10]={10,20,30,40,50,60,70,80,90,100},beg,end,mid,i,n=10,item;

printf("enter the value you want to search\n");
scanf("%d",&item);

beg=0;
end=n-1;
mid=(end+beg)/2;

while((beg<=end)&&(arr[mid]!=item))
{
if(item<arr[mid])
{
end=mid-1;
}
else
{
beg=mid+1;
}

mid=(beg+end)/2;
}
{
if(item==arr[mid])
{
printf("%d found at %d position\n",item,mid+1);
}
else
{
printf("%d not found",item);
}
}
}
