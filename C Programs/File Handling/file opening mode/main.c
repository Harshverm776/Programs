#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    fptr=fopen("new.txt","w");
    if(fptr==NULL)
        printf("file is not opened");
    return 0;
}
