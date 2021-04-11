#include<iostream>
using namespace std;

int main(){

    char o;
    float num1,num2;
    cout<<"Enter the operator(+,-,*,/): ";
    cin>>o;
    cout<<"Enter two operands: ";
    cin>>num1,num2;
    switch(o){

        case "+":
            cout<<num1<<"+"<<num2<<"="<<num1+num2;
            break;
        case "-":
            cout<<num1<<"-"<<num2<<"="<<num1-num2;
            break;
        case "*":
            cout<<num1<<"*"<<num2<<"="<<num1*num2;
            break;
        case "/":
            cout<<num1<<"/"<<num2<<"="<<num1/num2;
            break;










    }

}