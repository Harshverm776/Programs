#include<stdio.h>
void main()
{ int n,num;
 int *iptr,*ptr1,*ptr2,*ptr;
 printf(" enter the no. of the table you want and no. till you wants the table\n");
 scanf("%d%d",&n,&num);
 ptr1=&n;
 ptr2=&num;
 for( *iptr=1;*iptr<=*ptr2;(*iptr)++) 
 { *ptr=(*ptr1) * (*iptr);
  printf("%d * %d =%d \n",*ptr1,*iptr,*ptr);
 }
}
