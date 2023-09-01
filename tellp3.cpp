#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   ofstream fout;
   char ch;
   fout.open("a.txt",ios::app);
   int pos;
   pos=fout.tellp();
   cout<<pos;
   fout<<"mysirg";
   pos=fout.tellp();
   cout<<pos;
   fout.close();
   fout<<"mysirg";
   pos=fout.tellp();
   cout<<pos;
   fout.close();



}

