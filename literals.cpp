// literals are type of constant
// a=5; here 5 is a type of literal constant

#include<iostream>
using namespace std;
// const double pi = 3.14;
// const char newline = '\n';
#define pi 3.14 // these are preprocess defining it will also act as literals
#define newline "\n"
// const string newline = "\n";
int main()
{

    double r = 5.0;
    double circle = 2*pi*r;
    cout<<circle<<endl;
    return 0;

}