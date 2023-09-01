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

       cout<<  *p <<endl;
       p++;
    }

    cout<<"\n Total value in the list l2 are"<<l1.size()<<endl;
    cout<<"\n Element in list l1 after sort is";
     l1.sort();
     list<int>::iterator p1=l1.begin();
    while(p1!=l1.end())
    {
       cout<< *p1 <<endl;
       p1++;
    }

    cout<<endl;
    cout<<"\n Element in list l2 after sort is";
    l2.sort();
    list<string>::iterator p2=l2.begin();
      while(p2!=l2.end())
    {

       cout<<  *p2 <<endl;
       p2++;
    }

}
