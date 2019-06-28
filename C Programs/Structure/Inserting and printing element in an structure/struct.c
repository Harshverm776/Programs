#include<stdio.h>
#include<string.h>
void main()
{int num,i;
 struct book{
 char name[30];
 int page;
 float prize;
 }b[10];
 printf(" enter th eno. of books(max10):\n");
 scanf("%d",&num);
 for( i=0;i<num;i++)
 { printf("\n enter the details of book %d :-",i+1);
 printf("\n name ");
 scanf("%s",&b[i].name);
 printf("\n no. of pages ");
 scanf("%d",&b[i].page);
 printf("\n prize");
 scanf("%f",&b[i].prize);
 }
 printf(" \n your details are :-\n");
 for(i=0;i<num;i++)
 { printf(" bok %d \n name %s \n pages %d \n prize %f \n ",i+1,b[i].name,b[i].page,
 b[i].prize);
 }
}
