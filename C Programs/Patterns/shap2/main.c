#include <stdio.h>
#include <stdlib.h>

int main()
{
        int i,a[5][5],j;
    for(i=0;i<5;i++)
     { for(j=0;j<5;j++)
       { if(j>i)
        printf(" ");
        else
         { printf("%d",j+1);
         }
       }printf("\n");
     }
    return 0;
}
