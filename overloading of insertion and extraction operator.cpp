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
   friend ostream& operator<<(ostream&,complex);
   friend istream& operator>>(istream&,complex);
};
 std::ostream& operator<<(ostream&dout,complex c)
 {
     cout<<"\n a="<<c.a<<"b="<<c.b;
     return(dout);
 }
    std::istream& operator>>(istream&din,complex&c)
   {
       cin>>c.a>>c.b;
        return(din);
   }
int main()
{
    complex c1;
    cout<<"Enter a complex a number";
    cin>>c1;
    cout<<"You entered";
    cout<<c1; // operator<<(cout,c1)
    return 0;
}
