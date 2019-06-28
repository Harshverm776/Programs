#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,beg,end,mid,item,data[15],i;
    printf("enter the size of array:");
    scanf("%d",&num);
    printf("Enter sorted elements:\n");
    for(i=0;i<num;i++)
        scanf("%d",&data[i]);
    printf("enter the element you want to search:");
    scanf("%d",&item);
    beg=0;
    end=num-1;
    mid=(beg+end)/2;
    while(data[mid]!=item &&beg<=end)
    {
        if(item<data[mid])
            end=mid-1;
        else
            beg=mid+1;
        mid=(beg+end)/2;
    }
    if(data[mid]==item)
        printf("element found on %d location",mid+1);
    else
        printf("element not found");
    return 0;
}
