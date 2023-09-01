#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,int>m{{"mohan",13},{"sohan",14},{"sahil",16}};
   // m.insert(2,{7,"neyaj"});
    map<string,int>::iterator it=m.begin();
   // ++it;
    m.insert({{"Kozume"s, 11}, {"Kuroo", 12}});
     map<string,int>::iterator it1=m.begin();
    while(it1!=m.end())
    {
        cout<<it1->second<<endl;
        it1++;
    }

     return 0;
}
