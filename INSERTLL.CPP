#include<iostream.h>
#include<conio.h>
#include<process.h>
class node
{
	int info,item,s;
	node *link;
	public:
	void insert();
	void disp();
	void del();
	void search();
	void sum();
};
node *move,*start=NULL,*temp;

void node::insert()
{
	cout<<"\n Enter the item:";
	cin>>item;
	node *node1=new node;
	node1->link=NULL;
	node1->info=item;
	if(start==NULL)
		start=node1;
	else
	{
		move=start;
		while(move->link!=NULL)
		move=move->link;
		move->link=node1;
	}
}
void node::disp()
{
	node *x;
	x=start;
	cout<<"\n Elements in LL are:";
		while(x!=NULL)
		{
			cout<<"\t"<<x->info;
			x=x->link;
		}
}
void node::sum()
{
	node *x;
	x=start;
	s=0;
	while(x!=NULL)
	{
		s=s+x->info;
		x=x->link;
	}
	cout<<"\n Sum of node is"<<s;
}
void node::del()
{
	temp=start;
	if(temp!=NULL)
	{
		temp=temp->link;
		cout<<"\n Deleted node is "<<start->info;
		start=temp;
	}
	else
		cout<<"\n List is empty:";
}
void node::search()
{
	int c=0,f=0,d;
	cout<<"\n Enter item";
	cin>>item;
	temp=start;
	while(temp!=NULL)
	{
		c++;
		if(temp->info==item)
		{
			f=1;
			d=c;
			break;
		}
		temp=temp->link;
	}
	if(f==1)
		cout<<"\n element is found at positon"<<d;
		else
		cout<<"\n element is not found";
}
void main()
{
	clrscr();
	node n;
	int ch;
	cout<<"\n 1.insert 2.display 3.delete 4.search 5.sum 6.exit\n";
	do
	{
		cout<<"\nenter choice";
		cin>>ch;
		switch(ch)
		{
			case 1:n.insert(); break;
			case 2:n.disp(); break;
			case 3:n.del(); break;
			case 4:n.search(); break;
			case 5:n.sum(); break;
			case 6:exit(0);
		}
	}
	while(ch!=6);
	getch();
}