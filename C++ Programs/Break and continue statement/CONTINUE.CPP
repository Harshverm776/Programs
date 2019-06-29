#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,num;
i=1;
while(i<5)
{
cout<<"Enter no. :  ";
cin>>num;
if (num>=5)
{cout<<"The no. is greater then or equal to five \n";
continue;
}
cout<<"The no. is : ";
i++;
}
getch();
}