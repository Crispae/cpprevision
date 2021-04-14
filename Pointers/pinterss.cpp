#include<iostream>
using namespace std;

int main(){
    int var =20;
    int *ip;// pointer variable
    ip = &var;// points to the adress of var

    cout<<"value of var variable"<<endl;
    cout<<var<<endl;
    cout<<"Adress stored in ip variable"<<endl;
    cout<<ip<<endl;

    cout<<"value of ip variable"<<endl;
    cout<<*ip<<endl;

    return 0;
}