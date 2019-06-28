#include<stdio.h>
void main()
{
int a[100];
int p,n,v,i;
printf ("enter the size of array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("%d \n",a[i]);
}
printf("enter the position ");
scanf("%d",&p);
for(i=n-1;i>=p;i--)
{
a[i+1]=a[i];
}
printf("enter the element");
scanf("%d",&v);
a[p]=v;
printf("new array\n");
for(i=0;i<=n;i++)
{
printf("%d\n",a[i]);
}
}
