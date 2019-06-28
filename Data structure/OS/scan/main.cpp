#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int a[8],start,i,j,t,p,hm=0;
    clrscr();
    printf("Enter the starting head no.:- ");
    scanf("%d",&start);
    for(i=0; i<8; i++)
    {
        printf("\nEnter the Head no. of %d Process:- ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0; i<8; i++)
    {
        for(j=0; j<7; j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(i=0; i<8; i++)
    {
        if(start<a[i])
        {
            p=i-1;
            break;
        }
    }
    hm=start-a[p];
    for(i=p; i>0; i--)
        hm=hm+abs(a[i]-a[i-1]);
    hm=hm+a[0]+a[p+1];
    for(i=p+1; i<7; i++)
        hm=hm+abs(a[i]-a[i+1]);
    printf("\nThe Total no. of Head Movement is %d",hm);
    getch();
}
