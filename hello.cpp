#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   ifstream fin;
   fin.open("main");
   int pos;
   pos=fin.tellg();
   cout<<pos;
    return 0;
}
