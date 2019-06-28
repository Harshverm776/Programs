#include<stdio.h>
void main()
{ int a[100], i, num, e=0, o=0;
 printf(" enter the size of the array\n");
 scanf(" %d",&num);
 printf(" enter the elements of the  array \n");
 for(i=0;i<num;i++)
 { scanf(" %d",&a[i]);
 }
 printf(" even no. in the array \n");
 for ( i=0;i<num;i++)
 { if(a[i]%2==0)
  { printf(" %d \t",a[i]);
  e++;
  }
 }
 printf(" \n total no. of even no. are %d \n",e);
 printf(" odd in the array are :- \n");
 for( i=0;i<num; i++)
 { if(a[i]%2!=0)
   { printf(" %d \t",a[i]);
   o++;
   }
 }
printf(" \n total no. of odd no. are %d \n", o);
}

