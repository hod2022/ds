#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class merge
{ 
int a[10],n;
public:
void read();
void merge_sort(int l,int h);
void merge1(int l,int m, int h);
void disp();
};
void merge::read()
{ 
cout<<"\n How many Elements you want to store:\n";
cin>>n;
cout<<"\n Enter elements \n";
for(int i=1;i<=n;i++)
 cin>>a[i];
merge_sort(1,n);
 
} 
void merge::merge_sort(int l,int h)
{ 
int mid;
if(l<h)
 { 
 mid=int((l+h)/2);
 merge_sort(l,mid);
 merge_sort(mid+1,h);
 merge1(l,mid,h);
 } 
} 
void merge::merge1(int low,int mid,int high)
{ 
int b[10];
int i=low;
int k=low;
int j=mid+1;
while((i<=mid)&&(j<=high))
 { 
 if(a[i]<=a[j])//Change a[i]>=a[j] for descending
 { 
 b[k]=a[i];
 i++;
 k++;
 } 
 else
 { 
 b[k]=a[j];
 j++;
 k++;
 } 
 } 
 if(i>mid)
{ 
 while(j<=high)
 { 
 b[k]=a[j];
 j++;
 k++;
 } 
 } 
 else
{ 
while(i<=mid)
 { 
 b[k]=a[i];
 i++;
 k++;
 } 
 } 
for(int k1=low;k1<=high;k1++)
 a[k1]=b[k1];
} 
void merge::disp()
{ 
for(int i=1;i<=n;i++)
cout<<a[i]<<"\t";
} 
void main()
{ 
clrscr();
merge m;
m.read();
cout<<"\nAfter Sorting\n";
m.disp();
getch();
} 