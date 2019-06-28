#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int a[20],start,i,j,t,p,hm=0,choice,n,l;
    printf("Enter the no. of elements :- ");
    scanf("%d",&n);
    printf("enter the length :- ");
    scanf("%d",&l);
    printf("Enter the position of head :- ");
    scanf("%d",&start);
    printf("Enter the elements :- ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("choose direction( 1.Right and 2.Left):- ");
    scanf("%d",&choice);
    for(i=0;i<n;i++)
    for(j=0;j<n-1;j++)
    if(a[j]>a[j+1])
    {
    t=a[j];
    a[j]=a[j+1];
    a[j+1]=t;
    }

    for(i=0;i<n;i++)
    if(start<a[i])
    {
    p=i-1;
    break;
    }
    if(choice ==2)
    {
        hm=start-a[p];
        for(i=p;i>0;i--)
        hm=hm+abs(a[i]-a[i-1]);
          hm=hm+a[0]+a[p+1];
        for(i=p+1;i<n-1;i++)
        hm=hm+abs(a[i]-a[i+1]);
    }
    else if(choice==1)
    {
        hm=a[p+1]-start;
        a[n]=l-1;
        for(i=p+1;i<n;i++)
        hm=hm+abs(a[i]-a[i+1]);
          hm=hm+l-1-a[p];
        for(i=p;i>0;i--)
        hm=hm+abs(a[i]-a[i-1]);
    }
    else
     printf("wrong choice");
    printf("\nThe Total no. of Head Movement is %d",hm);
    return 0;
}
