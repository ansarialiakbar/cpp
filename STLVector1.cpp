#include<iostream>
#include<vector>
using namespace std;

int main()
{
  vector<int>v1{4,3,6,8,5,1,9};
  vector<int>::iterator it=v1.begin();
  v1.insert(it+2,15);//element 15 will be added after element 3.
  for(int i=0; i<v1.size(); i++)
    cout<<v1[i]<<endl;

    return 0;
}
