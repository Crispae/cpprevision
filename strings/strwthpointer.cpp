#include<iostream>
using namespace std;

int main()
{
    char name[] = "saurav";
    char *p;
    p=name;

    while(*p != 0)
    {
        cout<<*p<<endl;
        
        p++;

    }
    return 0;



}