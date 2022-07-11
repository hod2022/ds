#include<iostream.h>
#include<conio.h>
#include<process.h>
class array
{
	int a[10],i,k,j,n,item;
	public:
	void get();
	void insert();
	void del();
	void disp();
};
void array::get()
{
	cout<<"\n enter array :";
	cin>>n;
	cout<<"\n enter element :";
	for(i=1;i<=n;i++)
	cin>>a[i];
}
void array::insert()
{
	cout<<"\n enter position :";
	cin>>k;
	cout<<"\n enter item :";
	cin>>item;
	j=n;
	while(j>=k)
	{
		a[j+1]=a[j];
		j--;
	}
	a[k]=item;
	n++;
}
void array::del()
{
	cout<<"\n Enter Position:";
	cin>>k;
	j=k;
	while(j<=n-1)
	{
		a[j]=a[j+1];
		j++;
	}
	n--;
}
void array::disp()
{
	cout<<"\n Elements are:";
	for(i=1;i<=n;i++)
	cout<<a[i]<<"\t";
}
void main()
{
	clrscr();
	array d;
	int ch;
	d.get();
	cout<<"\n 1.Insert 2.Del 3.Disp 4.Exit\n";
	while(ch!=4)
	{
		cout<<"\n enter choice";
		cin>>ch;
		switch(ch)
		{
			case 1:d.insert(); break;
			case 2:d.del(); break;
			case 3:d.disp(); break;
			case 4:exit(0);
		}
	}
	getch();
}