//Consider the following example where parent class provides an interface to the base class to implement a function called getArea() −
#include <iostream>
using namespace std;
//Base class
class Shape {
    public:
    //pure virtual function providing interface framework
    virtual int getArea() = 0;
    void setWidth(int w) {
        width = w;
    }
    void setHeight(int h) {
        height = h;
    }
    protected:
       int width;
       int height;
};
//Derived classes
class Rectangle : public Shape {
    public:
        int getArea() {
            return ( width * height);
        }
};
class Triangle: public Shape {
    public:
       int getArea() {
        return ( width * height)/2;
       }
};
int main(void) {
    Rectangle Rect;
    Triangle Tri;
    Rect.setWidth(5);
    Rect.setHeight(7);
//print the area of the object
cout << "Total area of the Rectangle: "<< Rect.getArea() << endl;
Tri.setWidth(5);
Tri.setHeight(7);

//print the area of the object
cout << "Total area of the Triangle: "<< Tri.getArea() << endl;
return 0;
}