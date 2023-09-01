#include<iostream>
using namespace std;
// when one function overloaded with different job is known as fuction overloading
int area(int l,int b);
float area(int);

int main(){
    int l,b,a,r;
    float A;
    cout<< "Enter the radius of circle";
    cin>> r ;
    A = area(r);
    cout<< "Area of circle is"<< A << endl;
    cout<< "\n Enter the length & bradth of rectangle ";
    cin>> l >> b ;
    a = area(l,b);
    cout<< "Area of rectangle is"<< a << endl;
    return 0;

}
int area(int l,int b){
    return  l*b;
}
float area (int r){
    return 3.14*r*r;
}