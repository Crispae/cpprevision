// logical operator can be used is the condition when we have to use more than
// one operator
// && and opeartor
// || or operator
// ! not operator

#include<iostream>
using namespace std;

int main()
{

    int num1 = 30;
    int num2 = 40;

    if (num1>=40 || num2>=40)
    {
        cout<<"OR block has been executed"<<endl;
    }
    if (num1>=20 && num2>=20){

        cout<<"AND block has been executed"<<endl;
    }

    return 0;
}
