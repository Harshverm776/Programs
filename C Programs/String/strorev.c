#include<stdio.h>
void main()
{ char str[10],revstr[10];
 int i,len;
 printf(" enter a string :");
 gets(str);
 len=strlen(str);
 for(i=0;i<len;i++)
 { revstr[len-i-1]=str[i];
 }
 revstr[len]='\0';
 if( strcmp(str,revstr)==0)
 {printf(" it is anagram\n");
 }
 else{ printf(" it is not a anagram\n");
	}
}
