#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    FILE *fp;
    fp=fopen("f1.txt","r");
    if(fp==NULL)
        printf("File not found");
    ch=fgetc(fp);
    while(!feof(fp))
    {
        printf("%c",ch);
        ch=fgetc(fp);
    }
    fclose(fp);
    return 0;
}
