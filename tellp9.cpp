#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   ofstream fout;
   char ch;
   fout.open("a.txt",ios::binary);
   int pos;
   pos=fout.tellp();
   cout<<pos;
   fout<<"MOVE FORWARD";
   pos=fout.tellp();
   cout<<pos;
   fout.close();




}

