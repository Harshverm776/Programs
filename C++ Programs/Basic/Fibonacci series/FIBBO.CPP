# include <iostream.h>
#include<conio.h>
int  main()
{int n,first=0,second=1,next,c;
cout<<"enter the no. of terms ";
cin>>n;
cout<<"First "<<n<<"terms of fibonnaci series are :-\n";
for(c=0;c<n;c++)
	{if(c<=1)
	next=c;
	else {next=first+second;
	first=second;
	second =next;
	     }
cout<<next<<"\n";
	}
    getch();
    return(0);
}
