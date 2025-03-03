#include <iostream>
using namespace std;
class Car {
    public:
    string brand;
    string model;
    int year;
};
int main()
{
    //create an object of a car
    Car carObj1;
    carObj1.brand = "BMW";
    carObj1.model = "x5";
    carObj1.year = 1969;

    //create another object of a car
    Car carObj2;
    carObj2.brand = "Ford";
    carObj2.model = "Mustang";
    carObj2.year = 1970;

    //print attribute values
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year <<" " << endl;
    cout <<carObj2.brand << " " << carObj2.model << " " << carObj2.year  <<" " << endl;
    return 0;
}