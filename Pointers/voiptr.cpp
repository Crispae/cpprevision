#include<iostream>
using namespace std;


//Pointer is a variable that stores a memory address

// Every variable is located under unique location 
//within a computer's memory and this unique 
//location has its own unique address, the memory address.



int main(){

    void *ptr;
    float f=2.3;
    ptr = &f;

    cout<<&f<<endl;
    cout<<ptr;
    return 0;



}