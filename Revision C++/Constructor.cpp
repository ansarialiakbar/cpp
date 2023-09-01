#include<iostream>
using namespace std;
// It is a member function of a class.
// Name  of constructor is same as name of class .
// constructor is used to solve the problem of "INITIALIZATION"
class complex{
    // private:
    
    public:
    int a,b,d;
    complex(int x , int y){
        a=x; b=y;
        cout<<"Value of a ="<< a << endl;
        cout<<"Value of b ="<< b << endl;
    }
    complex()  
    { 
    //   default constructor
    }
    complex(int k){
        d = k;
        cout<<"Value of d ="<< d << endl;
    }
    // copy constructor formate is c4=c1
    complex(complex&r){
        a=r.a;
        b=r.b;
        // cout<< "Value of copy constructor a ="<< a  << endl;
        //  cout<< "Value of copy constructor b="<< b  << endl;
    }
   
    };



int main(){
    complex c1(3,4),c2,c3(5);
    complex c4 = c1 ;
    cout<< c4.a << " " <<c4.b << endl;
}
