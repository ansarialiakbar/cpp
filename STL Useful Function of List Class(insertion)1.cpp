#include<iostream>
#include<list>
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
        while(q!=mylist.end())
    {

       cout<<  *q <<endl;
       q++;
    }

   cout<<endl;
    cout<<"\nElement in the list l2 after insertion is";
     list<string>::iterator r=mylist1.begin();
     ++r;
     mylist1.insert(r,"ASGER");
      while(r!=mylist1.end())
    {

       cout<<  *r <<endl;
       r++;
    }
}
