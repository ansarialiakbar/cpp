#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   ofstream fout;
   char ch;
   fout.open("a.txt",ios::ate);
   cout<<fout.tellp();
   fout.seekp(2,ios_base::beg);
    cout<<fout.tellp();
    cout<<fout.get();
    fout.close();






}

