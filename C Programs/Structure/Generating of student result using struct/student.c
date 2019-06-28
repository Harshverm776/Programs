#include<stdio.h>
#include<string.h>
void main()
{int num,j,i,total=0;
 struct student{
 char name[30];
 int rollno;
 int marks[5];
 float percent;
 }s[10];
 printf(" enter the no. of students(max10):\n");
 scanf("%d",&num);
 for( i=0;i<num;i++)
 { printf("\n enter the details of student %d :-",i+1);
 printf("\n name ");
 scanf("%s",&s[i].name);
 printf("\n enter the roll-no.  ");
 scanf("%d",&s[i].rollno);
 printf("\n ");
 printf("enter the marks of 5 subjects\n");
 for(j=0; j<5;j++)
 { scanf("%d",&s[i].marks[j]);
   total=total+s[i].marks[j];
 }
 s[i].percent=total/5;
 }
 printf(" \n the result of students are :-\n");
 for(i=0;i<num;i++)
 { printf(" student %d \n name %s \n roll-no. %d \n percent %f \n ",i+1,s[i].name,
 s[i].rollno, s[i].percent);
 }
}
