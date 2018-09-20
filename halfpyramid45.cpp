#include<iostream>
using namespace std;
class pyramid
{
int rows;
int i,j;
public:
void get()
{
cout<<"enter no of rows:"<<endl;
cin>>rows;
}
void print()
{
for(i=0;i<=rows;i++)
{
for(j=0;j<=i;j++)
{
cout<<"*";
}
cout<<endl;
}
}
};
int main()
{
pyramid p;
p.get();
p.print();
return 0;
}


