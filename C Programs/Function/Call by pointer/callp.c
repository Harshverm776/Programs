#include<stdio.h>
void swap( int *m,int *n)
{ int t;
 t= *m;
 *m= *n;
 *n=t;
 printf("\n swapping in function %d %d \n",*m,*n);
}
void main()
{ int a,b;
printf(" enter the two no.s \n");
scanf("%d%d",&a,&b);
printf(" \n before swapping %d %d \n", a,b);
swap( &a,&b);
printf(" \n after the swapping %d %d\n",a,b);
}

