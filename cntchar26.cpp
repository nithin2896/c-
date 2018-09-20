#include<iostream>
using namespace std;
class strg
{
char str[100];
char ch;
public:
void getstring()
{
cout<<"Enter string:"<<endl;
cin>>str;
}
public:
void display()
{
int i;
int count=0;
cout<<"enter the character you want to count:"<<endl;
cin>>ch;
if(str[i]==ch)
{
count=count+1;
}
cout<<"the frequency of entered character is:"<<count<<endl;
}
};
int main()
{
strg s;
s.getstring();
s.display();
return 0;
}

