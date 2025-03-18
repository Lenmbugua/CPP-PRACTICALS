#include <iostream>
using namespace std;
//Base class
class Shape {
    public:
    void display() {
        cout << "This is a shape." << endl;
    }
};
//First derived class
class Polygon : public Shape {
    public:
       void sides() {
        cout << "A polygon has multiple sides. " << endl;
       }
};
//second derived class
class Triangle : public Polygon {
    public:
      void type() {
        cout << "A triangle comes under a three-sided polygon. " << endl;
      }
};

int main() {
    Triangle myTriangle;
    myTriangle.display();      //from shape
    myTriangle.sides();        //from polygon
    myTriangle.type();         //from triangle
    return 0;
}