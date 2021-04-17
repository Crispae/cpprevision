// private can be accessed within class
// protected is used in a particular class
// publica can be accessed aywhere.

#include<iostream>
using namespace std;

class example{ // creating class

private: // adding private modifier
    int val; // variable decleration


public: // adding public modifier
    void int_Val(int v); // declaring variable in public access
    void print();

};

void example ::print() // defining both the variable outside the class but by referring with :: opearator
    {
        cout<<"val "<<val<<endl;
    };

void example ::int_Val(int v)
    {
        val = v;
    };


int main ()

    { // using main function.

        example ex;
        int c =99;

        ex.int_Val(c);
        ex.print();

    return 0;

    }

