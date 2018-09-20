#include<iostream>
using namespace std;
class alphabet
{
int i,j,rows;
char k;
int count=64;
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
count=count+1;
}
for(k=65;k<=count;k++)
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

