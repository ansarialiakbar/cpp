#include<iostream>
using namespace std;
class complex
{
private:
    int a,b;
public:
    void setdata(int x,int y)
    {
        a=x; b=y;
    }
    void showdata()
    {
        cout<<"\n a= "<<a<<"b="<<b;
    }
   friend complex operator+(complex ,complex );

};
 complex operator+(complex x,complex y)
    {
        complex temp;
        temp.a=x.a+y.a;
        temp.b=x.b+y.b;
        return(temp);
    }
int main()
{
    complex c1,c2,c3;
    c1.setdata(6,4);
    c2.setdata(9,6);
    c3=c1+c2;//c3=c1.operator+(c2)
    c3.showdata();
    return 0;
}
