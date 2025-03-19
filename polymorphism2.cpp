#include <iostream>
using namespace std;
class Shape {
    protected:
        int width,height;
    public:
       Shape( int a = 0, int b = 0){
        width = a;
        height = b;
       }
       int area() {
        cout << "Parent class area:" << width * height << endl;
        return width * height;
       }
};
class Rectangle : public Shape {
    public:
    Rectangle( int a =0, int b = 0) :Shape(a,b) { }
      int area () {
        cout << "Rectangle class area: " << width * height << endl;
        return (width * height);
      }
};
class Triangle : public Shape {
    public:
    Triangle( int a =0, int b = 0) :Shape(a,b) { }
      int area () {
        cout << "Triangle class area: " << (width * height)/2 << endl;
        return (width * height)/2;
      }
};
//main function of the program
int main() {
    Shape *shape;
    Rectangle rec(10,7);
    Triangle tri(10,5);

//store the address of the Rectangle
shape =&rec;

//call rectangle area
shape->area();

//store address of the Triangle
shape = &tri;

//call triangle area
shape->area();
return 0;
}
