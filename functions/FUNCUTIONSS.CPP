#include<iostream>
using namespace std;

//return__type function_name(parameter list){//body}


int max(int num1,int num2);// define
int main()
{

    int a = 800;
    int b = 100;
    int result;
    result = max(a,b);
    cout<<"The maxiumun value is: "<<result<<endl;

    return 0;
}

int max(int num1,int num2)
{
    int result;
    if (num1>num2)
    {
        result = num1;
    }else if (num2>num1)
    {
        result = num2;
    }

    return result;

}