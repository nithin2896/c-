#include<iostream>
using namespace std;
class diamond
{
int i,j,rows,k;
int count=0;
public:
void get()
{
cout<<"enter no of rows:"<<endl;
cin>>rows;
}
public:
void print()
{
for(i=1;i<=rows;i++)
{
for(j=1;j<=rows-i;j++)
{
cout<<" ";
}
for(k=1;k<=i;k++)
{
cout<<"*"<<" ";
}
cout<<endl;
}
for(i=1;i<=rows-1;i++)
{
{
count=i;
}
for(j=1;j<=count;j++)
{
cout<<" ";
}
for(k=rows-1;k>=i;k--)
{
cout<<"*"<<" ";
}
cout<<endl;
}
}
};
int main()
{
diamond d;
d.get();
d.print();
return 0;
}

