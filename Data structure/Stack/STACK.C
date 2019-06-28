#include<stdio.h>
#include<conio.h>
 int stack[100];
 int top=-1;
void push(int element)
{if(top==99);
 {printf("stack overflow\n");
 getch();
 exit(1);
 }
 top=top+1;
 stack[top]=element;
}
int pop()
{if(top==-1)
 {printf("stack underflow\n");
 getch();
 exit(1);
 }
 return(stack[top--]);
}
void display()
{ int i;
printf(" the stack elements are :\n");
for(i=top;i>=0;i--)
printf("\t %d \n",stack[i]);
}
void main()
{ int choice,num1=0,nmu2=0;
while(1)
{clrscr();
 printf(" enter choice:\n1.push\n2.pop\n3.display\n4.exit\n");
 scanf("%d",&choice);
 switch(choice)
 { case 1:
   {printf(" enter element\n");
   scanf("%d",&num1);
   push(num1);
   break;
   }
   case 2:
   {printf(" element pop is %d\n",nmu2);
   getch();
   break;
   }
case 3:
   {display();
   getch();
   break;
   }
case 4:
   {exit(1);
   break;
   }
default:
   {printf("Invalid choice\n");
   }
  }
 }
}
