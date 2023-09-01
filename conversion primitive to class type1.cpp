#include<iostream>

using namespace std;
class complex
{

private:
    int a,b;

public:
    complex(){}

     /* int  arrange(int x, int y)
    {
        a=x; b=y;
   }*/
     show()
    {

        cout<<"\n a="<<a<<"b="<<b;
    }
    complex(int k)
    {
        a=k; b=0;
    }
};
int main()
{

 complex c1;
 int x=6;
 c1=x;
 c1.show();

 return 0;

}
