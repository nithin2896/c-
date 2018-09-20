#include<iostream>
#include<cstring>
using namespace std;
class strng
{
char str[100];
public:
void getstring()
{
cout<<"enter string:"<<str<<endl;
cin>>str;
}
public:
void display()
{
for(int i=0;i<=strlen(str);i++)
{
if(str[i]>=65&&str[i]<=97)
str[i]=str[i]+32;

}
cout<<"string:"<<str<<endl;
} 
};
int main()
{
strng s1;
s1.getstring();
s1.display();
return 0;
}

