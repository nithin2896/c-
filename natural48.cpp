#include<iostream>
using namespace std;
class alphabet
{
int i,rows;
int k;
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
{
count=i;
}
for(k=1;k<=count;k++)
{
cout<<k;
}
cout<<endl;
}
}
};
int main()
{
alphabet d;
d.get();
d.print();
return 0;
}

