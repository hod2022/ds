#include<iostream.h>
#include<conio.h>
class matrix
{
int a[5][5],b[5][5],c[5][5],d[5][5],e[5][5],f[5][5];
int p,q,i,j,k,n,m;
public:
void get();
void add();
void sub();
};
void matrix::get()
{
cout<<"\nEnter Number of Row & Column :\t";
cin>>n>>m;
cout<<"\nEnter the first Matrix:\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
cin>>a[i][j];
}
cout<<"\nEnter Number of Row & Column :\t";
cin>>p>>q;
cout<<"\nEnter the first Matrix:\n";
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
cin>>b[i][j];
}
}
void matrix::add()
{
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
cout<<"\nThe addition of two matrix is :\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
 cout<<c[i][j]<<"\t";
 cout<<"\n";
}
}
void matrix::sub()
{
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
d[i][j]=a[i][j]-b[i][j];
}
}
cout<<"\nThe Substraction of two matrix is :\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
 cout<<d[i][j]<<"\t";
 cout<<"\n";
}
}
void main()
{
clrscr();
matrix m;
m.get();
m.add();
m.sub();
getch();
}
