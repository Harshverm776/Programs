#include<stdio.h>
void main()
{ int num, digit, sum=0,num1;
 printf(" enter the no. \n");
 scanf(" %d",&num);
 num1=num;
while( num>0)
{ digit= num%10;
  sum=sum+ digit;
  num=num/10;
}
 printf(" sum of digit of %d=%d \n",num1,sum);
}
