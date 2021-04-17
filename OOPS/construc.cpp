#include <iostream>
using namespace std;

// constructor name is same as class name it is deafult
// it is always called with build custom constructor class
//of our own choice by overiding the default one
// constructor class has no return type

class line
{
public:
    double length;
    void setlength(double lene);
    void getlength();
    line();
};

line ::line()
{
    cout << "constructor class has been created!!!!!" << endl;
};

void line::setlength(double lene)

{
    length = lene;
};

void line::getlength()

{

    cout << "The length is: " << length<<endl;
};

int main()
{
    line obj1;

    obj1.setlength(9.5);
    obj1.getlength();


}