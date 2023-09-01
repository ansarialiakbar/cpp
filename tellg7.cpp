#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   ifstream fin;
   char ch;
   fin.open("a.txt");
   cout<<fin.tellg();
   cout<<"\n"<<(char)fin.get();
   cout<<(char)fin.get();
   cout<<"\n"<<(char)fin.tellg();




}

