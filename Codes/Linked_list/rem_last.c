#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node *link;
};

struct node *create_list(struct node *start);
void display(struct node *start);
struct node *addatbeg(struct node *start,int data);
struct node *addatend(struct node *start,int data);
struct node *RemoveLastInsertFirst(struct node *start);
int main(void)
{
	struct node *start=NULL;	
	start=create_list(start);
	display(start);
	start = RemoveLastInsertFirst(start);
	display(start);
	return 0;
}

struct node *RemoveLastInsertFirst(struct node *start)
{
	struct node *p;
	p=start;
	if(start==NULL || start->link==NULL )
		return start;
	while(p->link->link!=NULL)
		p=p->link;
	
	p->link->link=start;
	start=p->link;
	p->link=NULL;
	return start;
}

struct node *create_list(struct node *start)
{
	int i,n,data;
	printf("Enter the number of nodes : ");
	scanf("%d",&n);
	start=NULL;
	if(n==0)
		return start;

	printf("Enter the element to be inserted : ");
	scanf("%d",&data);
	start=addatbeg(start,data);

	for(i=2;i<=n;i++)
	{
		printf("Enter the element to be inserted : ");
		scanf("%d",&data);
		start=addatend(start,data);	
	}
	return start;
}

void display(struct node *start)
{
	struct node *p;
	if(start==NULL)
	{
		printf("List is empty\n");
		return;
	}
	p=start;
	printf("List is :\n");
	while(p!=NULL)
	{
		printf("%d ",p->info);
		p=p->link;
	}
	printf("\n\n");
}

struct node *addatbeg(struct node *start,int data)
{
	struct node *tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->info=data;
	tmp->link=start;
	start=tmp;
	return start;
}

struct node *addatend(struct node *start,int data)
{
	struct node *p,*tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->info=data;
	p=start;
	while(p->link!=NULL)
		p=p->link;
	p->link=tmp;
	tmp->link=NULL;
	return start;
}
