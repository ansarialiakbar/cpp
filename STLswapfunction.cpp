#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,5> v1={2,4,3,6,8};
    array<int,5> v2={12,13,14,15,16};
   /* cout<<v1.at(2)<<endl;
    cout<<v1.at(3)<<endl;
    cout<<v1.at(4)<<endl;

     cout<<"size of array is="<<v1.size()<<endl;
     array<int,5>::iterator it=v1.begin();
     cout<<"begin element of array=" << *it <<endl;
     array<int,5>::iterator it1=v1.end();
     cout<<"end element of array=" << *(it1-2);
     */
     v1.swap(v2);
     cout<<"elements of v1 after swap is";
     for(int i=0; i<5; i++)
     cout<<v1[i] << " ";
     cout<<endl;
     cout<<"elements of v2 after swap is";
     for(int i=0; i<5; i++)
      cout<<v2[i]<< " ";
    return 0;
}
