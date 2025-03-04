#include <iostream>
using namespace std;
class Box{
    public:
         double length;     //Length of a box
         double breadth;    //breadth of a box
         double height;     //height of a box
};
int main()
{
    Box Box1;      //Declare Box1 of type box
    Box Box2;      //Declare Box2 of type box
    double volume = 0.0;    //store the volume of a box here

    //Box1 specification
    Box1.height = 5.0;
    Box1.breadth = 5.0;
    Box1.breadth = 5.0;

    //Box2 specification
    Box2.height = 10.0;
    Box2.breadth = 12.0;
    Box2.breadth = 13.0;

    //volume of Box1
    volume = Box1.height * Box1.breadth * Box1.length;
    cout << "Volume of Box1: " << volume <<endl;

    //volume of Box2
    volume = Box2.height * Box2.breadth * Box2.length;
    cout << "Volume of Box1: " << volume <<endl;
    return 0;
}