// type casting
// type casting is not actomatic in c++ as in python and javascript

#include<iostream>
using namespace std;

int main()
{

    int a;
    double b = 2.55;
    a=b;// implict type casting
    cout<<a<<endl;
    a = (int)b; // explict type casting
    cout<<a<<endl;
    return 0;

}