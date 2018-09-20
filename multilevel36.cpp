#include<iostream>
using namespace std;
class parent
{
int i;
public:
void get()
{
cout<<"enter num:"<<endl;
cin>>i;
}
void print()
{
cout<<"entered num is:"<<i<<endl;
}
};
class child:public parent
{
int i;
};
class child2:public child
{
int i;
};
int main()
{
child2 s;
s.get();
s.print();
return 0;
}




