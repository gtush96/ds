#include<stdio.h>
#include<stdlib.h>

struct node
{
	int val, pr;
	struct node *next;
}*start;	//start is declared

void push(int, int);//declaration of mmethod we are going to use
void pop();		//declaration

void disp()
{
	struct node *temp;
	temp = start;
	printf("\nPriority Queue: ");
	while(temp!=NULL)
	{
		printf("%d,%d ",temp->val, temp->pr);
		temp=temp->next;
	}
printf("\n");
}

void push(int ele,int pri)
{
	struct node *temp, *t;
	temp = (struct node *)malloc(sizeof(struct node));
	temp->val=ele;
	temp->pr=pri;
	temp->next=NULL;

	if(start==NULL)
		start = temp;
	else if(start->pr>pri)
	{
		temp->next=start;
		start=temp;
	}
	else
	{
		t=start;
		while(t->next!=NULL && (t->next)->pr<=pri )
			t=t->next;
		temp->next=t->next;
		t->next=temp;
	}
disp();
}

void del() //remove elements
{
	if(start!=NULL)
	{
	printf("\n\tRemoved: %d",start->val);
	start = start->next;
	disp();
	}
	else
	printf("\nError List Empty");
}
void main()
{
push(10,4);
push(20,2);
push(40,7);
push(1000,1);
del();
}
