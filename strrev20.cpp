#include<iostream>
#include<cstring>
using namespace std;
class strng
{
char str[100];
int i,j;
public:
void get()
{
cout<<"enter string:"<<endl;
cin>>str;
}
public:
void print()
{
for(j=strlen(str)-1;j>=0;j--)
{
cout<<str[j];
}
cout<<endl;
}
};
int main()
{
strng s;
s.get();
s.print();
return 0;
}
