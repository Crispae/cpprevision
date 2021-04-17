#include <iostream>
using namespace std;

class car
{
public:
    string name;
    int id;
    void printname();
    void printid()
    {
        cout<<"BMW id is: "<<id<<endl;
    }

};

void car ::printname(){

    cout<<"car name is: "<<name;

}

int main()
{
    car obj1;
    obj1.name = "BMW";
    obj1.id = 89;
    obj1.printid();
    obj1.printname();

    return 0;
}