#include<iostream.h>
#include<conio.h>
void main()
{
int i;
i=1;
while(i<5)
{
clrscr();
cout<<"This is the sample program \n";
cout<<"To test the break statment \n";
break;
cout<<"control never comes here \n";
i++;
}
cout<<"This is the next statment after break \n";
getch();
}