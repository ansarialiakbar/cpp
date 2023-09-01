// friend function is not a member function of a class to which it is a friend.
// friend function is declared in the  class with  friend keyword.
// it must be defined outside the class to which it is friend .
#include <iostream>
using namespace std;
class complex{
    public:
    int real,img;
    complex(int x, int y){
        real=x;
        img=y;
    }
    friend complex operator+(complex,complex);
};
 complex operator+(complex &x, complex &y ){
    complex ans(0,0);
    ans.real = x.real +y.real;
    ans.img = x.img +y.img;
    return ans;
}
int main(){
    complex c1(2,3);
    complex c2(4,5);
    complex c3 = c1+c2;
    cout<< c3.real <<"i"<< c3.img <<endl;
}