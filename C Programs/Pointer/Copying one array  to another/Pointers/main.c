#include <stdio.h>
#include <stdlib.h>

void strcpy(char *s,char *t)
{
   int i;
    while(*s++=*t++);
    for(i=0;i<10;i++)
    printf("%c",*s++);

}
int main()
{
    char a[]="harsh",s[10];
    strcpy(&s,&a);
    return 0;
}
