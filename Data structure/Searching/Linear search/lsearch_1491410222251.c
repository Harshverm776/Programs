#include<stdio.h>
void main()
{
int a[10],i,flag=0,item;
printf("enter the elements of array\n");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
 printf("enter the element you wanna search\n");
scanf("%d",&item);

for(i=0;i<10;i++)
{
if(a[i]==item)
{
flag=1;
break;
}
}

if(flag==1)
{
printf("%d found at %d\n",item,i+1);
}
else
{
printf("not found");
}
}
