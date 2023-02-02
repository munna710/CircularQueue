#include<stdio.h>
#include<conio.h>
#define LENGTH 5
int queue[LENGTH];
int front=0,rear=0;
void add(int);
void del();
void list();
void main()
{
	int choice,n;

	do
	{
		clrscr();
		printf("\n\tqueue operation\n");
		printf("\n\t\t1.add");
		printf("\n\t\t2.delete");
		printf("\n\t\t3.list");
		printf("\n\t\t4.exit");
		printf("\nenter your choice(1-4): ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("\n enter the data: ");
			       scanf("%d",&n);
			       add(n);
				break;
			case 2:del();
				break;
			case 3:list();
				break;
			defualt:printf("please enter the choice between(1-6)");
				continue;
		 }
		 getch();
	}
	while(choice!=4);
}
void add(int x)
{
	if(((rear+1)%LENGTH)==front)
	{
		printf("\nsorry..queue is full");
		return;
	}
	rear=(rear+1)%LENGTH;
	queue[rear]=x;
	printf("\n%d is added",x);
}
void del()
{
	if (front==rear)
	{
		printf("\nqueue is empty");
		return;
	}
	front=(front+1)%LENGTH;
	printf("\n%d is removed",queue[front]);
}
void list()
{
	int i;
	if (front==rear)
	{
		printf("\nqueue is empty...");
		return;
	}
	printf("\n element in queue are:\n");
	i=front;
	do
	{
		i=(i+1)%LENGTH ;
		printf("\n%d",queue[i]);
	}
	while(i!=rear);
}


