#include<iostream>

using namespace std;
/* class to primitive type conversion can be implemented by type casting operator
*/
class complex
{

private:
    int a,b;

public:


      int arrange(int x, int y)
    {
        a=x; b=y;
   }
    void show()
    {

        cout<<"\n a="<<a<<"b="<<b;
    }
    operator int ()
    {
        return a;
    }
};
int main()
{

 complex c1;
 c1.arrange(3,4);
 c1.show();
 int x;
 x=c1;
 cout<<"\n x"<<x;


 return 0;

}
