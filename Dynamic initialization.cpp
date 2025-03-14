#include <iostream>
using namespace std;
class Rectangle {
    public:
      int width,height;

      //constructor to initialize width and height
      Rectangle(int w, int h) : width(w), height(h) {}
      void display() {
        cout << "Width: " <<width <<", Height: " << height << endl;
      }
};
int main() {
    //dynamically creating a rectangle object using the constructor
    Rectangle* rect = new Rectangle(10,5);
    //Display the values
    rect->display();
    //Deallocate memory
    delete rect;
    return 0;
}