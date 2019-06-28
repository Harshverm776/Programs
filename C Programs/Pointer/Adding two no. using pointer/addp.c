#include<stdio.h>
void main()
{int a,b;
 int *ptr1,*ptr2,*ptr;
 printf(" enter two no.s\n");
 scanf("%d%d",&a,&b);
 printf("values in a=%d and b=%d \n",a,b);
 ptr1=&a;
 ptr2=&b;
 *ptr=*ptr1+*ptr2;
 printf("addition is %d \n",*ptr);
}
