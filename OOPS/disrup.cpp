#include <iostream>
using namespace std;

// desruptor name is same as class name it is deafult
// it is always called with build custom desruptor class
//of our own choice by overiding the default one
// desrutpor class has no return type
//  it is used to free the memory 
// a class can have only one descructor
// desructor method is called at the end of main function.

class line
{
public:
    double length;
    void setlength(double lene);
    void getlength();
    line();
    ~line();
};

line ::line()
{
    cout << "constructor class has been created!!!!!" << endl;
};

line ::~line(){ // destructor class has been deined
    cout<<"obj has been deleted"<<endl;
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

    cout<<"or bhaii kiasa hai"<<endl;


}