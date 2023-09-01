#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   ofstream fout;
   char ch;
   fout.open("a.txt",ios::out);
   int pos;
   pos=fout.tellp();
   cout<<pos;
   fout<<"NEXT";
   pos=fout.tellp();
   cout<<pos;
   fout.close();




}

