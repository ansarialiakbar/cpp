#include<iostream>
#include<list>
#include<string>
using namespace std;
int main()
{

    list<int>mylist{2,4,3,6,7};
    list<string>mylist1{"Mohan","Sohan","Shyam","Abdul","Rohan"};

    //To insert an element in the list.

    cout<<"\nElement in the list l1 after insertion is";
     list<int>::iterator q=mylist.begin();
      ++q;
      ++q;
       mylist.insert(q,9);
        list<int>::iterator r=mylist.begin();
        while(r!=mylist.end())
    {

       cout<<  *r <<endl;
       r++;
    }

   cout<<endl;
    cout<<"\nElement in the list l2 after insertion is";
     list<string>::iterator s=mylist1.begin();
     ++s;
     mylist1.insert(s,"ASGER");
      list<string>::iterator t=mylist1.begin();
      while(t!=mylist1.end())
    {

       cout<<  *t <<endl;
       t++;
    }
}
