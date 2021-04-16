#include<iostream>
using namespace std;
// in c no oops concept exist in c++ exist
// class define the blueprint not data and method exactly

class box // class creation
{ // these data are accesed within the class 
    public: // only public data can be accessed outide of the class

    double  HEIGHT;
    double  LENGTH;
    double  BREADTH;

    double volume()
    {

        double VOLUME = HEIGHT*LENGTH*BREADTH;
        return VOLUME;
    }

    double area()
    {

        double AREA = LENGTH*BREADTH;
        return AREA;
    }

    
    
};

int main()
{

    box obj1;
    obj1.HEIGHT = 4.0;
    obj1.LENGTH = 3.0;
    obj1.BREADTH = 5.0;


    cout<<obj1.volume()<<endl;
    cout<<obj1.area()<<endl;

    return 0;
}