
//  do: once it has to  be executed
// while (exp);
#include<iostream>
using namespace std;

int main(){
    float number,sum=0.0;

    do
    {
        cout<<"Enter a number: ";
        cin>>number;
        sum+=number;
    }
    while (number != 0.0); // it act as expression
    {
        cout<<"Total sum :"<< sum;
    }
    return 0;

}