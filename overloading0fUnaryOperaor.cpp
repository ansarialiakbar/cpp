#include<iostream>
using namespace std;
class integer
{
private:
    int a;
public:
    void setdata(int x)
    {
        a=x; ;
    }
    void showdata()
    {
        cout<<" a= "<<a;
    }
    integer operator++()
    {
        integer temp;
        temp.a=++a;

        return(temp);
    }
};
int main()
{
    integer c1,c2;
    c1.setdata(3);
    c2.setdata(5);
    c2=++c1;//c3=c1.operator+(c2)
    c2.showdata();
    c1.showdata();
    return 0;
}
