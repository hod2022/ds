#include<iostream.h>
#include<conio.h>
#include<string.h>
class demo
{
int x[20],n;
public:
void get();
void asort(int,int);
int partition(int,int);
void disp();
};
void demo::get()
{
cout<<"\nEnter the array size:";
cin>>n;
cout<<"\nEnter the array element:";
for(int i=1;i<=n;i++)
cin>>x[i];
asort(1,n);
}
void demo::asort(int p,int q)
{
if(p<q)
{
int j=partition(p,q);
asort(p,j-1);
asort(j+1,q);
}
}
int demo::partition(int lb, int ub)
{
int a,left,right,temp;
a=x[lb];
left=lb+1;
right=ub;
do
{
while(x[left]<a) //change x[left]>a for descending
left++;
while(x[right]>a) //change x[right]<a for descending
right--;
if(left<right)
{
temp=x[left];
x[left]=x[right];
x[right]=temp;
}
}while(left<=right);
27
x[lb]=x[right];
x[right]=a;
return(right);
}
void demo::disp()
{
cout<<"\nThe array element are: ";
for(int i=1;i<=n;i++)
cout<<x[i]<<"\t";
}
void main()
{
clrscr();
demo d;
d.get();
cout<<"\nAfter Ascending sort";
d.disp();
getch();
}
