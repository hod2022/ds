
#include<iostream.h>
#include<conio.h>
#include<process.h>
class demo
{ 
int a[10],i,j,n,f,temp,ele,demo,mid,low,high;
public:
void get();
void sort();
void linear();
void binary();
void dis();
};
void demo::get()
{ 
cout<<"\n Enter n:";
cin>>n;
cout<<"\nEnter array Elements:";
for(i=1;i<=n;i++)
 cin>>a[i];
} 
void demo::linear()
{ 
int ele;
cout<<"\nEnter the element to be search";
cin>>ele;
for(i=1;i<=n;i++)
 { 
 if(a[i]==ele)
 { 
 cout<<"\nSuccessful search";
 cout<<"\nElement is found at position "<<i;
 return;
 } 
 } 
if(i>n)
 { 
 cout<<"\nUnsuccessful search:";
 cout<<"\nElement is not found ";
 } 
} 
void demo::sort()
{ 
for(i=1;i<=n;i++)
 { 
 for(j=1;j<=n-1;j++)
 { 
 if(a[j]<a[j+1])
 { 
 temp=a[j];
 a[j]=a[j+1];

 a[j+1]=temp;
 } 
 } 
 } 
} 
void demo::binary()
{ 
cout<<"\nEnter element to be search ";
cin>>ele;
f=0;
low=1;
high=n;
while(low<=high)
 { 
 mid=(low+high)/2;
 if(a[mid]==ele)
 { 
 f=1;
 cout<<"\nElement is found at :"<<mid;
 return;
 } 
 else if(a[mid]<ele)
 low=mid+1;
 else if(a[mid]>ele)
 high=mid-1;
 } 
if(f==0)
cout<<"\n Element is not found:";
} 
void demo::dis()
{ 
cout<<"\n Element are \n";
for(i=1;i<=n;i++)
 cout<<a[i]<<"\t";
} 
void main()
{ 
clrscr();
demo d;
int ch;
d.get();
d.dis();
cout<<"\n 1:Linear 2:Binary 3:exit\n";
while(ch!=3)
 { 
 cout<<"\nEnter Choice:";
 cin>>ch;
 switch(ch)
 { 
 case 1: d.linear(); break;
 case 2: d.sort();
 d.dis();
 d.binary(); break;
 case 3: exit(0); break;
 } 
 } 
getch();
5
} 
