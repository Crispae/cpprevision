#include<iostream>
using namespace std;

int main(){
    int a = 0;
    int b = 20;

    if(a && b) // and operator
    {
        cout<<"result is true"<<endl;
    } else{
        cout<<"Result is false"<<endl;
    }

    a = 8;
    b = 9;
    if(a || b) // or operator
    {
        cout<<"result is true"<<endl;
    }
    return 0;

}