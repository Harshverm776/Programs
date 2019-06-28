#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,qu[10],t[10],i,j,head,seek=0;
    cout<<"Enter no. of elements of queue"<<endl;
    cin>>n;
    cout<<"Enter the queue elements ";
    for(i=0;i<n;i++)
        cin>>qu[i];
    cout<<"enter initial head position"<<endl;
    cin>>head;

    for(i=0;i<n;i++)
        t[i]=abs(head-qu[i]);

    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
        if(t[i]>t[j])
        {
            int temp=t[i];
            t[i]=t[j];
            t[j]=temp;
            temp=qu[i];
            qu[i]=qu[j];
            qu[j]=temp;
        }
        for(i=0;i<n;i++)
        {
            seek=seek + abs(head -qu[i]);
            head = qu[i];
        }
        cout<<"Total seek time ="<<seek<<endl;
    return 0;
}
