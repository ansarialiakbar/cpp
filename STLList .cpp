#include<iostream>
#include<list>
using namespace std;
int main()
{

    list<int>l1{2,4,3,6,7};
    list<string>l2{"Mohan","Sohan","Shyam","Abdul","Rohan"};
    list<int>::iterator it=l1.begin();
    while(it!=l1.end())
    {
       cout<< *it+1 <<endl;
       it++;
    }

    cout<<"\n Total value in the list l1 are"<<l1.size();
    cout<<endl;
    list<string>::iterator p=l2.begin();
      while(p!=l2.end())
    {
        string s1;
        s1="Q";
       cout<<  s1=*p <<endl;
       p++;
    }

    cout<<"\n Total value in the list l2 are"<<l1.size();

}
