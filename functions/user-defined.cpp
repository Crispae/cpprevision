// defining user-defined function

#include<iostream>
using namespace std;

// function protoptype is defined earlier than function
int add(int a,int b);

int main()
{
    int num1,num2,result;
    cout<<"Enter two number to add: ";
    cin>> num1>>num2;

    result = add(num1,num2);
    cout<<"The sum two number is: "<<result;
    return 0;
}
int add(int a,int b)
{
    int result;
    result = a+b;
    return result;

}
