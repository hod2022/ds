#include<iostream.h>
#include<conio.h>
class demo
{
	int a[10],i,j,n,last,exch,temp;
	public:
	void get();
	void asc_sort();
	void dec_sort();
	void disp();
};
void demo::get()
{
	cout<<"Enter Size Of Array :";
	cin>>n;
	cout<<"\n Enter The Element :";
	for(i=1;i<=n;i++)
	cin>>a[i];
}
void demo::asc_sort()
{
	last=n;
	for(i=1;i<=n;i++)
	{
		exch=0;
		for(j=1;j<=last-1;j++)
		{
			if(a[j]<a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			exch=exch+1;
		}
	}
	if(exch==0)
	return;
	else
	last=last-1;
}
void demo::dec_sort()
{
	last=n;
	for(i=1;i<=n;i++)
	{
		exch=0;
		for(j=1;j<=last-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			exch=exch+1;
		}
	}
	if(exch==0)
	return;
	else
	last=last-1;
}
void demo::disp()
{
	cout<<"\n The Array Element Are :";
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
	cout<<"\n Ascrnding Order :";
	d.disp();
	d.dec_sort();
	cout<<"\n Descinding Order :";
	d.disp();
	getch();
}
