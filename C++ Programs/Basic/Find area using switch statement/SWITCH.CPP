#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int choice;
float l,b,r,h,B,area;
cout<<"select the appropiate option \n";
cout<<"1. for rectangle \n";
cout<<"2. for circle \n";
cout<<"3. for triangle \n";
cin>>choice;
switch(choice)
{
case 1:
cout<<"enter the value of length and breadth \n";
cin>>l>>b;
area=l*b;
cout<<"\n the area of rectangle is "<<area;
break;
case 2:
cout<<"\n enter the value of radius \n";
cin>>r;
area=3.14*r*r;
cout<<"\n the area of circle is "<<area;
break;
case 3:
cout<<" \n enter the value of base and height \n";
cin>>B>>h;
area=.5*B*h;
cout<<"\n the area of triangle is "<<area;
break;
default:
cout<<"\n please select correct option \n ";
}
getch();
}
