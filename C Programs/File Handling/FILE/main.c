#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    FILE *fp;
    char s[]="hello brother";
    fp=fopen("f1.txt","w");
    if(fp==NULL)
    {   printf("file cannot open");
        exit(1);
    }
    for(i=0;i<strlen(s);i++)
        fputc(s[i],fp);
    fclose(fp);
    return 0;
}

