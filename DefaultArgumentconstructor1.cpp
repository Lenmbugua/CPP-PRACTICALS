#include <iostream>
using namespace std;
class Box {
    public:
      int length,width,height;

    //constructor with multiple default arguments
    Box( int l =5, int w = 10, int h = 2) {     //Default values for length,height and width
        length = l;
        width = w;
        height = h;
    }
    void display() {
        cout << "Length: " << length <<", Width: " << width << ", Height: "<< height << endl;
    }
};
    int main() {
        //create objects with different number of arguments
        Box box1;
        Box box2(15);
        Box box3(15,20);
        Box box4(15,20,25);

        //Displaying the objects values
        box1.display();
        box2.display();
        box3.display();
        box4.display();
        return 0;
}