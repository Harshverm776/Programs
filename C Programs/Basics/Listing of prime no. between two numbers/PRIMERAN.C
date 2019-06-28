#include<stdio.h>
void main()
{ int n1,num,i,c=0;
clrscr();
printf(" type the range respectively\n");
scanf("%d%d",&num,&n1);
printf(" the prime no.s are \n");
for(num=num;num<=n1;num++)
{ for(i=2;i<num;i++)
  { if( num%i==0)
     { c++;}
  }
  if(c==0)
  {printf("%d\n",num);
  }
}
getch();
}