#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
class insert
{
	int a[10],n,q,i,j,k,key,temp,ptr;
	public:
	void get();
	void sort();
	void display();
};
void insert::get()
{
	cout<<"\n Enter Array :";
	cin>>n;
	for(i=1;i<=n;i++)
	a[i]=random(1000);
	cout<<"\n Elements are :";
	for(i=1;i<=n;i++)
	cout<<a[i]<<"\t";
}
void insert::sort()
{
	a[0]=-9999;
	for(i=2;i<=n;i++)
	{
		temp=a[i];
		ptr=i-1;
		while(temp<a[ptr])
		{
			a[ptr+1]=a[ptr];
			ptr--;
		}
		a[ptr+1]=temp;
	}
}
void insert::display()
{
	cout<<"\n Sorted element using insertation sort :";
	for(i=1;i<=n;i++)
	cout<<a[i]<<"\t";
}
void main()
{
	clrscr();
	insert i;
	i.get();
	i.sort();
	i.display();
	getch();
}
