#include<stdio.h>
int main()
{int i,n,a[100],item,s,c=0;
clrscr();
printf("type the no.  of elements you want in the array= \n");
scanf("%d",&n);
printf(" type different elements in the array\n");
for( i=0;i<n;i++)
{ printf("a[%d]=",i);
  scanf("%d",&a[i]);
}
 item=a[0];
 for( i=0;i<n;i++)
 { if(item>a[i])
   item=a[i];
 }
printf(" the minimum value is =%d",item);
getch();
return 0;
}