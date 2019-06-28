#include <stdio.h>
#include <stdlib.h>

int main()
{
    float  n=1,sum=0;
    float check=-0.8333333;
    printf("check=%f",check);
    while(check!=sum)
    {
        sum=sum+n;
        printf("sum=%f\n",sum);
    }
    return 0;
}
