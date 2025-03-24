#include <iostream>
using namespace std;
class Car {    //The class
    public:          //Access specifier
    string brand;    //Attribute
    string model;    //Attribute
    int year;        //Attribute
    Car(string x, string y, int z) {
        brand = x;
        model = y;
        year = z;
    }
};
int main() {
    //create car objects and call the constructor with different values
    Car carObj1("BMW", "x5", 1999);
    Car carObj2("Ford", "Mustang", 1969);
    //print values
    cout << carObj1.brand << " " << carObj1.model << " " <<carObj1.year << endl;
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << endl;
    return 0;
}