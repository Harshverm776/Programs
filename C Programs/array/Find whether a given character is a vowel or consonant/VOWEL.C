#include<stdio.h>
#include<conio.h>
void main()
{ char ch;
clrscr();
printf(" type a character:\n");
scanf("%c",&ch);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
{printf(" it is vowel \n");
}
else if(ch=='q'||ch=='w'||ch=='r'||ch=='t'||ch=='y'||ch=='u'||ch=='p'||ch=='s'||ch=='d'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='n'||ch=='b'||ch=='v'||ch=='c'||ch=='x'||ch=='z')
	{printf(" consonant\n");
	}
else if(ch==' ')
	{printf(" space\n");
	}
else { printf(" invalid\n");
     }

getch();
}