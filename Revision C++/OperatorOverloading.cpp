#include<iostream>
using namespace std;
// According to C++ If you want to use operator symbol as a function name you can use it but a condition you have to folow you have to write "operator" keyword before operator symbol. you  can used only operator as a function name which was valid in "C".
// When a operator is overloaded with multiple job is known as operator overloading .
// It is way to implement compile time polymorphism.
// you can not overload "sizeof"& ?: operator .
// class complex {
//     public:
//     int real;
//     int img;
//     complex(int x , int y){
//        real = x ;
//        img = y ;
//     }
    
//     complex operator+( complex &c){
//         complex ans(0 , 0);
//         ans.real = real + c.real;
//         ans.img  = img + c.img;
//         return ans;
//     }

// };
// int main(){
    
//     complex c1(3,4);
//     complex c2(5,6);
//     complex c3 = c1+c2;
//     cout<< c3.real << "i" << c3.img<< endl;
//     return 0;
// }
// overloading of unaryoperator ++(pre and post)
class integer{
    public:
    int x;
    integer(int a){
        x= a;
    }
    // integer operator++(){
    //     integer i(0);
    //     i.x = ++x;
    //     return i;
    // }
    // integer operator++(){
    //     integer i(0);
    //     i.x= x++;
    //     return i;
    // }
    integer operator-(){
        integer i(0);
        i.x= -x;
        return i;
    }
};
int main(){
    integer i1(3);
    integer i2= -i1;
    cout<< i2.x << endl; 
}