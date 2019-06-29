#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int i,j,k,n;
cout<<"Enter the no. of rows is the pyramid \n";
cin>>n;
for(i=1;i<=n;i++)
{
	for(j=1;j<=n-i;j++)
	{
	cout<<" ";
	}
	for(k=1;k<=i;k++)
	{
	cout<<k;
	}
	cout<<"\n";
}
getch();
}
