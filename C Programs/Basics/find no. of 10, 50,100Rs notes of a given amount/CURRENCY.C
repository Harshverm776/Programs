#include<stdio.h>
#include<conio.h>
void main()
{ int num,n1,n2;
clrscr();
printf(" type the amount for the case to be debit\n");
scanf("%d",&num);
num=num/10;
n1=num%10;
if( n1>5)
 {printf(" 1 note of 50Rs. \n");
 n2=n1-5;
 printf("%d notes of 10Rs. \n",n2);
 }
else{printf("%d notes of 10Rs. \n",n1);

	 }
num=num/10;
printf(" %d notes of 100Rs. \n",num);
getch();
}