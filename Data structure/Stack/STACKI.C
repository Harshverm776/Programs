#include<stdio.h>
#include<conio.h>
 int stack[100],max, top=-1,num1;
char ch;
void push()
{
   if(top==max-1)
      printf("stack overflow\n");
  else{printf(" enter element\n");
	  scanf("%d",&num1);
	top+=1;
	  stack[top]=num1;
	 }
}
void pop()
{int item;
 if(top==-1)
       printf("stack underflow\n");
 else{item=stack[top];
		 top-=1;
		 printf(" element pop is %d\n",item);
		}
}
void display()
{ if(top==-1)
      printf("stack empty\n");
  else{int i;
	  printf(" the stack elements are :\n");
	  for(i=top;i>=0;i--)
	  printf("\t stack[%d]=%d \n",i,stack[i]);
	 }
}
char conti()
{ printf(" do you want to continue(y-n):");
 scanf("%s",&ch);
 return(ch);
}

void main()
{ int choice,i;
 clrscr();
 printf(" enter the size of stack\n");
 scanf("%d",&max);
do{
  printf(" enter choice:\n1.push\n2.pop\n3.display\n4.stop\n");
 scanf("%d",&choice);
 switch(choice)
 { case 1:
   push();
   ch=conti();
   break;
   case 2:
   pop();
   ch=conti();
   break;
   case 3:
   display();
   ch=conti();
   break;
   default:
   printf("Invalid choice\n");
   }
}while(ch=='y');
getch();
}
