#include <iostream>
using namespace std;
//Base class
class Car {
    public:
       void drive() {
        cout << "Driving on land" << endl;
       }
};
//Base class 2
class Boat {
    public:
       void sail() {
        cout << "sailing on water" << endl;
       }
};
//Derived class
class DualmodeVehicle: public Car, public Boat {
    public:
       void use() {
            drive();     //calls the drive function from car
            sail();      //calls the saik function from boat
       }
};
int main() {
    DualmodeVehicle myVehicle;
    myVehicle.use();     //Demonstrate both functionalities
    return 0;
}