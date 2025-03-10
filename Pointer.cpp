#include <iostream>
using namespace std;
class Box {
    public:
    //constructor definition
    Box(double l = 2.0, double b = 2.0, double h = 2.0) {
        cout <<"Constructor called. " <<endl;
        length = l;
        breadth = b;
        height = h;
    }

    double Volume(){
        return length * height * breadth;
    }
    private:
       double length;       //Length of a box
       double height;       //height of a box
       double breadth;      //breadth of a box
};
int main(void) {
    Box Box1(3.3, 1.2, 1.5);      //Declare box1
    Box Box2(8.5, 6.0, 2.0);      //Declare box2
    Box *ptrBox;                 //Declare pointer to a class

    //save the address of the first object
    ptrBox = &Box1;
    //Now try to access a member using member access operator
    cout << "Volume of Box1: " << ptrBox->Volume() << endl;
    //save address of the second object
    ptrBox = &Box2;
    //Now try to access a member using member access operator
    cout << "Volume of Box2: " << ptrBox->Volume() << endl;
    return 0;
}