#include <iostream>
using namespace std;
//Base class shape
class Shape {
    public:
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
//base class paintcost
class Paintcost {
    public:
       int getCost(int area) {
        return area * 70;
       }
};
//Derived class
class Rectangle: public Shape, public Paintcost {
    public:
       int getArea() {
        return (width * height);
       }
};
int main(void) {
    Rectangle Rect;
    int area;
    Rect.setWidth(5);
    Rect.setHeight(7);
    area = Rect.getArea();
    //print the area of the object
    cout << "Total area: " << Rect.getArea() << endl;
    //print the total cost of the painting
    cout << "Total paint cost: $" <<Rect.getCost(area) <<endl;
    return 0;
}