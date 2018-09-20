#include<iostream>
using namespace std;
class pyramid
{
int n,r,rows,space,ncr;
public:
void get()
{
cout<<"enter no of rows:"<<endl;
cin>>rows;
}
void print()
{
for(n=0;n<rows;n++)
{
for(space=1;space<=rows-n;space++)
{
cout<<" ";
}


for(r=0;r<=n;r++)
{
if(r==0||n==0)
{
ncr=1;
cout<<ncr<<" " ;
}
else
{
ncr=ncr*(n-r+1)/r;
cout<<ncr<<" " ;
}
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


