#include<stdio.h>
#include<string.h>
void main()
{ char str1[10],str2[10];
 printf(" enter the string1\n");
gets(str1);
printf(" enter the string2\n");
gets(str2);
if(strcmp(str1,str2)==0)
{ printf("entered strings are same\n");
}
else{ printf(" entered strings are not same\n");
    }
}
