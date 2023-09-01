#include<iostream>
using namespace std;
int main(){
    int i,n;
    cin>> n;
    for ( i = 0; i < n; i++)
    {
        /* code */
        if(i%3 == 0){
            continue;
        }
        cout<< i << endl;
    }
           return 0;
 
}
