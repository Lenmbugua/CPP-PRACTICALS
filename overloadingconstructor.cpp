#include <iostream>
using namespace std;
class Rectangle {
    public:
       int length,width;
       //Default constructor( no parametres )
       Rectangle() {
         length = 1;
         width = 1;
       }
       //constructor with no parameter(square)
       Rectangle( int side) {
        length = side;
        width = side;
       }
       //constructor with two parameters(Rectangle)
       Rectangle(int l, int w) {
        length = l;
        width = w;
       }
       //method to display the area of a rectangle
       void displayArea() {
        cout << "Area: " << length * width << endl;
       }
};
int main() {
    //using different constructors
    Rectangle rect1;        //Default constructor
    Rectangle rect2(5);     //constructor with one parameter
    Rectangle rect3( 5,3 );    //constructor with two parameters

    rect1.displayArea();
    rect2.displayArea();
    rect3.displayArea();
    
    return 0;
}