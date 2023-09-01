#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   ofstream fout;
   char ch;
   fout.open("a.txt",ios::ate);
   int pos;
   pos=fout.tellp();
   cout<<pos;
   fout<<"MOVE";
   pos=fout.tellp();
   cout<<pos;
   fout.close();




}

