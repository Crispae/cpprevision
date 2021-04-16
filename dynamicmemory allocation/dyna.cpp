#include<iostream>
using namespace std;

int main(){

    // allocatinf dynamic memory

    int * ptr = new int;
    *ptr = 8;
    cout<<*ptr<<endl;
    cout<<&ptr<<endl; // pointer adress in static memory
    cout<<&(*ptr)<<endl;// adress in heap memory

    return 0;






}