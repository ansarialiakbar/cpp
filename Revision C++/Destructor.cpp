#include<iostream>
using namespace std;
// Destructor is same as  name of class but precendedby tilde(~)symbol
// Destructor has no return type
// it  takes no argument

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
    // Destrutor
    ~complex(){
        cout<< "Destructor is called"<<endl;
    }
   
    };



int main(){
    complex c1(3,4) ;
    complex* c2= new complex();
    delete c2;
    complex  c3(5);
    complex c4 = c1 ;
    cout<< c4.a << " " <<c4.b << endl;
}
