#include<stdio.h>
#include<stdlib.h>
void create();
void display();
struct student
{
	int number;
	struct student *next;
};
typedef struct student node;
node *first=NULL;
int main()
{
		int n;
		printf("1.create\n 2.display\n 3.beginning\n 4.end\n 5.middle\n6.delete beginning\n 7.delete ending\n 8.delete middle\n9.count\n");
	while(1)
	{
		printf("enter n");
		scanf("%d",&n);
		if(n==1)
		create();
		else if(n==2)
		display();
        else
      return 0;
    }
		
}

void create()
{
	node*q,*temp=first;int x;
	while(1)
	{
		q=(node*)malloc(sizeof(node));
		if(q==NULL)
		{
			printf("no memory");
			return;
		}
		printf("enter value");
		scanf("%d",&x);
		if(x==-1)
		return;
		q->number=x;
		q->next=0;
		if(first==NULL)
		temp=first=q;
		else
		{
			temp->next=q;
			temp=q;
		}
	}
	return;
}
	
	void display()
	{
		node*temp=first;
		if(temp==0)
		{
			printf("no elements");
			return;
		}
		while(temp!=0)
		{
			printf("%d",temp->number);
			temp=temp->next;
		}
			return;
		}
			
	
	