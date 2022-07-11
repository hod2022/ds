#include<iostream.h>
#include<conio.h>
class demo
{
	int a[10],i,j,n,min_index,temp;
	public:
	void get();
	void asc_sort();
	void dec_sort();
	void disp();
};
void demo::get()
{
	cout<<"\n Enter Size Of Array :";
	cin>>n;
	cout<<"\n Enter Elements :";
	for(i=1;i<=n;i++)
	cin>>a[i];
}
void demo::asc_sort()
{
	for(i=1;i<=n-1;i++)
	{
		min_index=i;
		for(j=i+1;j<=n;j++)
		{
			if(a[j]<a[min_index])
			min_index=j;
		}
		if(min_index!=i)
		{
			temp=a[min_index];
			a[min_index]=a[i];
			a[i]=temp;
		}
	}
}
void demo::dec_sort()
{
	for(i=1;i<=n;i++)
	{
		min_index=i;
		for(j=i+1;j<=n;j++)
		{
			if(a[j]>a[min_index])
			min_index=j;
		}
		if(min_index!=i)
		{
			temp=a[min_index];
			a[min_index]=a[j];
			a[j]=temp;
		}
	}
}
void demo::disp()
{
	cout<<"\n The Array Elements Are:";
	for(i=1;i<=n;i++)
	cout<<a[i]<<"\t";
}
void main()
{
	clrscr();
	demo d;
	d.get();
	d.disp();
	d.asc_sort();
	cout<<"\n ASC Are:";
	d.disp();
	d.dec_sort();
	cout<<"\n DEC Are:";
	d.disp();
	getch();
}