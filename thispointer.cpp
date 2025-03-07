#include <iostream>
using namespace std;
class Box {
    public:
    //constructor definition
    Box(double l = 2.0, double b = 2.0, double h = 2.0 ) {
        cout << "Constructor called." << endl;
        length = l;
        height = h;
        breadth = b;
    }
    double Volume() {
        return length * height * breadth;
    }
    int compare(Box box) {
        return this->Volume() > box.Volume();
    }
    private:
    double length;       //Length of a box
    double breadth;      //Breadth of a box
    double height;       //Height of a box
};
int main(void) {
    Box Box1(3.3,1.2,1.5);    //Declare box1
    Box Box2(8.5,6.0,2.0);    //Declare box2

    if(Box1.compare(Box2)) {
        cout << "Box2 is smaller than Box1" << endl; 
        } else {
            cout << "Box 2 is equal to or larger than Box1" <<endl;
        }
        return 0;
    }