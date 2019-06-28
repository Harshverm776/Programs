#include<stdio.h>
int cqueue[100], max, front = -1, rear = -1, num1;
int element;
void c_enqueue()
{
	if (front == (rear + 1) % max)
		printf("queue overflow\n");
	else
	{
		if ((front == -1) && (rear == -1))
		{
			printf(" enter the element\n");
			scanf("%d", &element);
			front = (front + 1) % max;
			rear = (rear + 1) % max;
			cqueue[rear] = element;
		}
		else
		{
			printf(" enter the element\n");
			scanf("%d", &element);
			rear = (rear + 1) % max;
			cqueue[rear] = element;
		}
	}
}

void c_dequeue()
{
	if (front == -1)
		printf(" queue underflow\n");
	else
	{
		element = cqueue[front];
		front = (front + 1) % max;
		printf(" element deleted is %d\n", element);
	}
}

void display()
{int i;
	if ((front == -1) && (rear == -1))
		printf("queue empty\n");
	else{
	{
	i=front;
	while(i!=rear)
	{ printf("\t %d",cqueue[i]);
	if(i==max-1)
	i=0;
	else
	i+=1;
	}
	printf("\t %d",cqueue[i]);
	}
	}
}

void main()
{
	int choice, i;
	char c;
	printf(" enter the size of queue\n");
	scanf("%d", &max);

	do
	{
		printf(" enter choice:\n1.c_enqueue\n2.c_dequeue\n3.display\n");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			{
				c_enqueue();
			}
			break;
		case 2:
			{
				c_dequeue();
			}
			break;
		case 3:
			{
				display();
			}
			break;
		default:
			printf("Invalid choice\n");
		}
		printf("\n do you want to continue(y-n):\n");
		scanf("  %c", &c);
	}
	while (c == 'y');
}
