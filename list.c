#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
}

display(struct node *head)
{
	struct node *temp;
	temp=head;
	printf("\nmodified elements are %d\n",head->data);
	while(temp->next!=NULL)
	{
		temp=temp->next;
		printf("%d\n",temp->data);
	}
}

append(struct node *head,int num)
{
	struct node *temp;
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	
	temp->next=(struct node *)malloc(sizeof(struct node));
	temp->next->data=num;
	temp->next->next=NULL;
	printf("%d\n",temp->next->data);
}

delete(struct node *head,int num)
{
	struct node *temp;
	struct node *temp1;
	temp=head;
	temp1=head->next;
	while(temp1->data!=num)
	{
		temp=temp1;
		temp1=temp1->next;
	}
	
	temp->next=temp1->next;
	free(temp1);
	
	display(head);
}

main()
{
	struct node *head;
	int i;
	head=(struct node *)malloc(sizeof(struct node));
	head->data=2;
	head->next=NULL;
	printf("%d\n",head->data);
	for(i=0;i<20;i++)
	{
		append(head,i);
	}
	delete(head,10);
	delete(head,15);
	system("PAUSE");
}
