#include<iostream>
#include<fstream>
using namespace std;
int main()
{
char data[100];
ofstream out;
out.open("sample.dat");
cout<<"writing data into file"<<endl;
cout<<"enter you name:";
cin.getline(data,100);
out<<data<<endl;
cout<<"enter your marks:";
cin.getline(data,100);
out<<data<<endl;
out.close();
ifstream in;
in.open("sample.dat");
cout<<"reading data from file"<<endl;
in>>data;
cout<<data<<endl;
in>>data;
cout<<data<<endl;
in.close();
return 0;
}



