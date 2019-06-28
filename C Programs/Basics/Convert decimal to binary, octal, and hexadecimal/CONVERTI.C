#include<stdio.h>
#include<conio.h>
void binary( int n)
{ int num,bin=0,i=1, rem=0;
 num=n;
 while(n!=0)
   { rem=n%2;
    n=n/2;
    bin=bin+ rem*i;
    i=i*10;
   }
 printf("the binary of %d is %d \n",num,bin);
}
void octal( int n)
{ int num,oct=0,i=1, rem=0;
 num=n;
 while(n!=0)
   { rem=n%8;
    n=n/8;
    oct=oct + rem*i;
    i=i*10;
   }
 printf("the octal of %d is %d \n",num,oct);
}
void hexadecimal( int n)
  {int num;
  num=n;
  printf(" the hexadecimal of %d is %x",num,num);
  }
void main()
{int num,n,rem,i,item;
 clrscr();
 printf(" type decimal no. \n");
 scanf(" %d",&num);
 printf(" choose the options:\n1-binary\n2-octal\n3- hexadecimal\n");
 scanf(" %d",&item);
 switch(item)
 { case 1:
	  { binary(num);
	  }
	   break;
   case 2:
	  { octal(num);
	  }
	  break;
   case 3:
	  { hexadecimal(num);
	  }
	  break;
   default :
	  {printf(" choose the correct option\n");
	  }
	  break;
 }
getch();
}