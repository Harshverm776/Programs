#include<stdio.h>
#include<conio.h>
int front=-1;
int rear=-1;
char element;
struct queue
  { char queue[10];
    int front,rear;
  }q;
void enqueue()
 { if(q.rear==9)
    printf("queue overflow\n");
   else {if((q.front==-1) && (q.rear==-1))
	 { printf(" enter the character\n");
	  scanf("%s",&element);
	 q.front+=1;
	 q.rear+=1;
	 q.queue[q.rear]=element;
	 }
	else{ q.rear+=1;
		q.queue[q.rear]=element;
	    }
	}
 }
void dequeue()
 { if(q.front==-1)
     printf(" queue underflow\n");
   else {if( q.front==9 && q.rear==9)
	 { element=q.queue[q.front];
	  q.front=-1;
	  q.rear=-1;
	}
	else { element=q.queue[q.front];
	      q.front+=1;
	     }
	}
 }

void main()
{ int choice;
  clrscr();
  printf(" enter your choice:\n 1.enqueue\n 2.dequeue\n ");
  scanf("%d",&choice);
  switch(choice)
  { case 1:
     { enqueue();
     }
     break;
    case 2:
     { dequeue();
     }
     break;
    default:
     {printf(" invalid chioce\n");
     }
  }
getch();

}
